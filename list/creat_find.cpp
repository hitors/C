/*
时间：2020年11月12日08:03:21
功能：creatList:创建一个能存储多项式信息的链表.find_Kth:返回第K个单元的地址
*/


# include <stdio.h>
# include<malloc.h>
# include<stdlib.h>

typedef struct List * ad;//ad 为指向链表的指针类型
struct List
{
    int coef;//系数
	int expon;//指数
	ad pNext;
};

ad creatList(void)//创建一个链表，并且给链表进行初始化
{
    int length;
	int i;
	int coef;
	int expon;

	ad pHead =(ad)malloc(sizeof(struct List));//创造一个数据单元，pHead指向该空间
	if(pHead->pNext==NULL)
	{
	    printf("分配失败");
		exit(-1);//exit()关闭所有文件，终止正在执行的进程。
	}
	ad pTail = pHead;//pTail作为中间变量，为接下来循环准备
	pTail->pNext = NULL;//将指针指向NULL

	printf("请输入创建的节点个数");
	scanf("%d", &length);
    
    for(i=0;i<length;i++)
	{    
        printf("请输入第%d项多项式的系数",i+1);
		scanf("%d",&coef);
		printf("请输入第%d项多项式的次数", i+1);
		scanf("%d",&expon);

	    ad pNew = (ad)malloc(sizeof(struct List));
		if(pNew==NULL)
		{
		    printf("分配失败");
			exit(-1);//exit()关闭所有文件，终止正在执行的进程。
		}

		pNew->coef = coef;
		pNew->expon = expon;
		pTail->pNext = pNew;//之前创建的单元内的指针指向新创建的单元
		pNew->pNext = NULL;//将新创建的单元内的指针指向NULL
		pTail = pNew;//指针中间变量指向新创建单元

	}
	return pHead;
}

int Length(ad pHead)//获得链表长度
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
		if(pK==NULL)//检查K是否在链表长度范围
		{
			printf("不在查找范围");
			return NULL;
		}
	}

    return pK;//将要查找的地址返回
}

 
int main(void)
{
    creatList();
    return 0;
}