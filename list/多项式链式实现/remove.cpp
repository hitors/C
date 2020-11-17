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
