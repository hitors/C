# include<stdio.h>
# include<malloc.h>

ad add(ad pHead,int k,int coef,int expon)//�ڵ�k����������һ�����
{
    ad pNew = (ad)malloc(sizeof(Lsit));
	ad pK;
	int i;
	if(k==0)
	{
	    pNew->pNext = pHead;
		pHead = pNew;
		pNew->coef = coef;
		pNew->expon = expon;
	}
	else if(k>0)
	{
	    for(i=0;i<k;i++)//���k�Ƿ񳬹����ĸ���
		{
		    pK = pK->pNext;
			if(pNew==NULL)
			{
			    printf("��������Χ");
				return NULL;
			}
		}
		pNew->pNext =pK->pNext;
		pK->pNext = pNew;
		pNew->coef = coef;
		pNew->expon = expon;
	}
	else
	{
		printf("�����k��Ч");
		return NULL
	}
	return pHead;
}

