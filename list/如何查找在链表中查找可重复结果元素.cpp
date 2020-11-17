/*
功能:用一个链表存储找到符合条件的结点地址
仍需调试
*/
pp check(ad pHead,int coef1)
{
    ad p=pHead;
	pp ppHead;
	pp m =ppHead;
	for(;p!=NULL;p->pNext)
	{
	    if(p->coef==coef1)
		{
		    pp ppNew =(pp)malloc(sizeof(pp));
			ppNew->point = p;
			ppNew->next = NULL;
			m->next=ppNew;			
			m = ppNew;	
		}
	
	}
	return ppHead;
}
