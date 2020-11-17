void destroy(ad pHead)
{
    ad p=pHead;
	for(;p!=NULL;p=p->next)
	{
		free(p);
	}
}