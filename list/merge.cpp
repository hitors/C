/*
功能：将两个按从大到小的顺序排放的链表合并成一个链表
*/
# include <stdio.h>

void merge(plist a,plist b;plist c)
{
    
	while(a&&b)
	{
		if(a->data<=b->data)
		{
			c->next = a;//若a中第一个结点中数据最小，则将头结点指向a
			c = c->next;//中间变量
			a = a->next;//指向下一个结点继续比较
		}
		else 
		{
		    c->next = b;
			c = c->next;
			b = b->next;
		}
    }

	c->next = pa?pa:pb;//将剩余的未比较的结点接上去
	free(a,b);
}
