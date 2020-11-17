# include<stdio.h>
# include<malloc.h>
# include<stdlib.h>


typedef struct List * ad;//ad 为指向链表的指针类型
struct List
{
        int coef;//系数
	int expon;//指数
	ad pNext;
};

