/*
ʱ�䣺2020��11��16��19:06:32
���ܣ�����һ����ͷ����˫�������������н���Ԫ�ذ�˳�����

*/

# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct DuLNode{
int coef;
int expon;
struct DuLNode * prior;
struct DuLNode * next;
}DuLNode,*DuLinkList;

DuLinkList creatDul(void)//ͷ�巨����˫������
{
    int coef1;//��ʱ�������
	int expon1;
	int length;//������
	int i;
	printf("����������ĳ���");
	scanf("%d", &length);
	DuLinkList p;
	DuLinkList pTail = (DuLinkList)malloc(sizeof(DuLNode));//����β�ڵ�
	p = pTail;
	pTail->next =NULL;
    pTail->prior=NULL;

	if(pTail==NULL)
	{
	    printf("����ʧ��");
		exit(-1);
	}

	for(i=0;i<length;i++)//������ͷ��㣬������Ϊlength
	{
	    printf("�������%d���ϵ��",i+1);
		scanf("%d",&coef1);
		printf("�������%d���ָ��",i+1);
		scanf("%d",&expon1);

		DuLinkList pNew = (DuLinkList)malloc(sizeof(DuLNode));
		p->coef = coef1;//��ֵ
		p->expon=expon1;
		pNew->next = p;//����ǰ����Ԫ��ָ����ָ���һ������Ԫ
		p->prior = pNew;//����һ����Ԫ��ǰָ����ָ��ǰ����Ԫ
		pNew->prior = NULL;
		p = pNew;
	}
		return pTail;
}

int printlist(DuLinkList pTail)
{
	int coef1;
    int expon1;//�ݴ�ÿ������Ԫ��ֵ
	DuLinkList p;//�ݴ�ѭ��������ĵ�ַ
	int length = 0;

	if(pTail==NULL)
	{
	    printf("��������Ϊ��");
		return 0;
	}

	for(p=pTail;p->prior!=NULL;p=p->prior)//pָ��ͷ���ʱ��p->next==NULL,ͷ��㲻�����Ч��data
	{
	    coef1= p->coef;
		expon1=p->expon;
		printf("�����%d������е�ϵ��Ϊ%d\n", length+1, coef1);
		printf("�����%d������е�ָ��Ϊ%d\n", length+1, expon1);
		
		length++;	
	}
	return length;
}

