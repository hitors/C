/*
时间：2020年11月16日19:06:32
功能：创建一个含头结点的双向链表，并把所有结点的元素按顺序输出

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

DuLinkList creatDul(void)//头插法建立双向链表
{
    int coef1;//暂时存放数据
	int expon1;
	int length;//链表长度
	int i;
	printf("请输入链表的长度");
	scanf("%d", &length);
	DuLinkList p;
	DuLinkList pTail = (DuLinkList)malloc(sizeof(DuLNode));//建立尾节点
	p = pTail;
	pTail->next =NULL;
    pTail->prior=NULL;

	if(pTail==NULL)
	{
	    printf("分配失败");
		exit(-1);
	}

	for(i=0;i<length;i++)//不包括头结点，链表长度为length
	{
	    printf("请输入第%d项的系数",i+1);
		scanf("%d",&coef1);
		printf("请输入第%d项的指数",i+1);
		scanf("%d",&expon1);

		DuLinkList pNew = (DuLinkList)malloc(sizeof(DuLNode));
		p->coef = coef1;//赋值
		p->expon=expon1;
		pNew->next = p;//将当前链表单元后指针域指向后一个链表单元
		p->prior = pNew;//将后一链表单元的前指针域指向单前链表单元
		pNew->prior = NULL;
		p = pNew;
	}
		return pTail;
}

int printlist(DuLinkList pTail)
{
	int coef1;
    int expon1;//暂存每个链表单元的值
	DuLinkList p;//暂存循环中链表的地址
	int length = 0;

	if(pTail==NULL)
	{
	    printf("输入链表为空");
		return 0;
	}

	for(p=pTail;p->prior!=NULL;p=p->prior)//p指向头结点时，p->next==NULL,头结点不存放有效的data
	{
	    coef1= p->coef;
		expon1=p->expon;
		printf("链表第%d个结点中的系数为%d\n", length+1, coef1);
		printf("链表第%d个结点中的指数为%d\n", length+1, expon1);
		
		length++;	
	}
	return length;
}

