# include<stdio.h>
# include<malloc.h>

typedef struct List * ad;//ad Ϊָ�������ָ������
struct List
{
    int coef;//ϵ��
	int expon;//ָ��
	ad pNext;
};
int remove(ad pHead,int k)
{
    ad p0 = pHead;
	ad p1,p2;
	int i;

	if(k==1)
	{
	    pHead = pHead->pNext;
		free(p0);
	}
	else if(k>1)
	{		
		for(i=1;i<k-1;i++);
		{
			p0 = p0->pNext;
			if(p0==NULL)
			{
				printf("ɾ����Ԫ������Χ");
				return (-1);
			}
		}
		p1 = p0;
		p0 = p0->pNext;
		p2 = p0->pNext;
		free(p0);//�ͷŵ�k����Ԫ�ڴ�
		p1->pNext = p2;//����k-1����Ԫ��ָ��ָ���k+1����Ԫ
    }
	else
	{
		printf("�����k��Ч");
		return (-1);
	}

	return 0;
}

int add(ad pHead,int k,int coef,int expon)//�ڵ�k����Ԫ������һ����Ԫ
{
    ad pNew = (ad)malloc(sizeof(Lsit));
	ad pK;
	int i;
	if(k==0)
	{
	    pNew->pNext = pHead;
		pHead = pNew;
	}
	else if(k>0)
	{
	    for(i=0;i<k;i++)
		{
		    pK = pK->pNext;
			if(pNew==NULL)
			{
			    printf("��������Χ");
				return (-1);
			}
		}
		pNew->pNext =pK->pNext;
		pK->pNext = pNew;
	}
	else
	{
		printf("�����k��Ч");
		return (-1);
	}
	return 0;
}

