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
				printf("ɾ����Ԫ������Χ");
				return (-1);
			}
		}
		p1 = p0;
		p0 = p0->pNext;
		p2 = p0->pNext;
		free(p0);//�ͷŵ�k����Ԫ�ڴ�
		p1->pNext = p2;//����k-1����Ԫ��ָ��ָ���k+1����Ԫ
    }
	else
	{
		printf("�����k��Ч");
		return (-1);
	}

	return 0;
}
