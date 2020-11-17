int length(ad pHead)//获得链表长度
{
    ad pTail = pHead;
	int Length = 0;
	for(;pTail!=NULL;pTail=pTail->pNext)
	{
	    Length++;
	}
	return Length;
}