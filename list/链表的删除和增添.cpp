# include<stdio.h>
# include<malloc.h>

typedef struct List * ad;//ad 为指向链表的指针类型
struct List
{
    int coef;//系数
	int expon;//指数
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
				printf("删除单元超出范围");
				return (-1);
			}
		}
		p1 = p0;
		p0 = p0->pNext;
		p2 = p0->pNext;
		free(p0);//释放第k个单元内存
		p1->pNext = p2;//将第k-1个单元内指针指向第k+1个单元
    }
	else
	{
		printf("输入的k无效");
		return (-1);
	}

	return 0;
}

int add(ad pHead,int k,int coef,int expon)//在第k个单元后增添一个单元
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
			    printf("超出增添范围");
				return (-1);
			}
		}
		pNew->pNext =pK->pNext;
		pK->pNext = pNew;
	}
	else
	{
		printf("输入的k无效");
		return (-1);
	}
	return 0;
}

