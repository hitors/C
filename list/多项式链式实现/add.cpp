# include<stdio.h>
# include<malloc.h>

ad add(ad pHead,int k,int coef,int expon)//在第k个结点后增添一个结点
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
	    for(i=0;i<k;i++)//检查k是否超过结点的个数
		{
		    pK = pK->pNext;
			if(pNew==NULL)
			{
			    printf("超出增添范围");
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
		printf("输入的k无效");
		return NULL
	}
	return pHead;
}

