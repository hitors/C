/*
ʱ�䣺2020��11��12��08:03:21
���ܣ�creatList:����һ���ܴ洢����ʽ��Ϣ������.find_Kth:���ص�K����Ԫ�ĵ�ַ
*/
ad find_Kth(ad pHead,int K)//�鿴��K���������
{
    ad pK = pHead;
	int i;
	for(i=1;i<K;i++)
	{
		pK=pK->pNext;
		if(pK==NULL)//���K�Ƿ��������ȷ�Χ
		{
			printf("���ڲ��ҷ�Χ");
			return NULL;
		}
	}
    return pK;//��Ҫ���ҵĵ�ַ����
}

