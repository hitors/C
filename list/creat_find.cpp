/*
ʱ�䣺2020��11��12��08:03:21
���ܣ�creatList:����һ���ܴ洢����ʽ��Ϣ������.find_Kth:���ص�K����Ԫ�ĵ�ַ
*/


# include <stdio.h>
# include<malloc.h>
# include<stdlib.h>

typedef struct List * ad;//ad Ϊָ�������ָ������
struct List
{
    int coef;//ϵ��
	int expon;//ָ��
	ad pNext;
};

ad creatList(void)//����һ���������Ҹ�������г�ʼ��
{
    int length;
	int i;
	int coef;
	int expon;

	ad pHead =(ad)malloc(sizeof(struct List));//����һ�����ݵ�Ԫ��pHeadָ��ÿռ�
	if(pHead->pNext==NULL)
	{
	    printf("����ʧ��");
		exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
	}
	ad pTail = pHead;//pTail��Ϊ�м������Ϊ������ѭ��׼��
	pTail->pNext = NULL;//��ָ��ָ��NULL

	printf("�����봴���Ľڵ����");
	scanf("%d", &length);
    
    for(i=0;i<length;i++)
	{    
        printf("�������%d�����ʽ��ϵ��",i+1);
		scanf("%d",&coef);
		printf("�������%d�����ʽ�Ĵ���", i+1);
		scanf("%d",&expon);

	    ad pNew = (ad)malloc(sizeof(struct List));
		if(pNew==NULL)
		{
		    printf("����ʧ��");
			exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
		}

		pNew->coef = coef;
		pNew->expon = expon;
		pTail->pNext = pNew;//֮ǰ�����ĵ�Ԫ�ڵ�ָ��ָ���´����ĵ�Ԫ
		pNew->pNext = NULL;//���´����ĵ�Ԫ�ڵ�ָ��ָ��NULL
		pTail = pNew;//ָ���м����ָ���´�����Ԫ

	}
	return pHead;
}

int Length(ad pHead)//���������
{
    ad pTail = pHead;
	int Length = 0;
	for(;pTail!=NULL;pTail=pTail->pNext)
	{
	    Length++;
	}
	return Length;
}

ad find_Kth(ad pHead,int K)
{
    ad pK = pHead;
	int i;
	for(i=1;i<K;i++)
	{
		pK=pK->pNext;
		if(pK==NULL)//���K�Ƿ��������ȷ�Χ
		{
			printf("���ڲ��ҷ�Χ");
			return NULL;
		}
	}

    return pK;//��Ҫ���ҵĵ�ַ����
}

 
int main(void)
{
    creatList();
    return 0;
}