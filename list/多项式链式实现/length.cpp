int length(ad pHead)//���������
{
    ad pTail = pHead;
	int Length = 0;
	for(;pTail!=NULL;pTail=pTail->pNext)
	{
	    Length++;
	}
	return Length;
}