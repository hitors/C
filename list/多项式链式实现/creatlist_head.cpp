/*
ȱ�ݣ��˻�����ʱ�ܱ�Ť���Խ�������ݳ�ʼ��ʱ˳��÷�����

*/

ad creatlist_head(void)//ͷ�巨��������
{
	ad p;
	int length;
	int i;
	int coef;
	int expon;

	ad pTail =(ad)malloc(sizeof(List));//����һ�����ݵ�Ԫ��pHeadָ��ÿռ�
	p = pTail;

	if(pTail==NULL)
	{
	    printf("����ʧ��");
		exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
	}

	printf("����������ĳ���");
	scanf("%d", &length);

	for(i=0;i<length;i++)
	{
		printf("�������%d�����ʽ��ϵ��",i+1);
		scanf("%d",&coef);
		printf("�������%d�����ʽ�Ĵ���", i+1);
		scanf("%d",&expon);

	    ad pNew = (ad)malloc(sizeof(List));

		if(pNew==NULL)
		{
		    printf("����ʧ��");
			exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
		}

		pNew->coef = coef;
		pNew->expon = expon;
		pNew->pNext = p;
		p = pNew;//��ͷָ�룬����Ԫ���Ϊͷ���
	}

	return p;
}

