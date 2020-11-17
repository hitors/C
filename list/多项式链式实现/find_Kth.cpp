/*
时间：2020年11月12日08:03:21
功能：creatList:创建一个能存储多项式信息的链表.find_Kth:返回第K个单元的地址
*/
ad find_Kth(ad pHead,int K)//查看第K个结点内容
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

