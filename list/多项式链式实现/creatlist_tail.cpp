ad creatlist_tail(void)//β�巨����һ���������Ҹ�������г�ʼ��
{
    int length;
	int i;
	int coef;
	int expon;

	ad pHead =(ad)malloc(sizeof(struct List));//����һ�����ݵ�Ԫ��pHeadָ��ÿռ�
	if(pHead==NULL)
	{
	    printf("����ʧ��");
		exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
	}
	ad p = pHead;//pTail��Ϊ�м������Ϊ������ѭ��׼��
	p->pNext = NULL;//��ָ��ָ��NULL

	printf("�����봴���Ľڵ����");
	scanf("%d", &length);
    
    for(i=0;i<length;i++)
	{    
		printf("�������%d�����ʽ��ϵ��",i+1);
		scanf("%d",&coef);
		printf("�������%d�����ʽ�Ĵ���", i+1);
		scanf("%d",&expon);
        printf("\n");
	    ad pNew = (ad)malloc(sizeof(struct List));
		if(pNew==NULL)
		{
		    printf("����ʧ��");
			exit(-1);//exit()�ر������ļ�����ֹ����ִ�еĽ��̡�
		}

		pNew->coef = coef;
		pNew->expon = expon;
		p->pNext = pNew;//֮ǰ�����ĵ�Ԫ�ڵ�ָ��ָ���´����ĵ�Ԫ
		pNew->pNext = NULL;//���´����ĵ�Ԫ�ڵ�ָ��ָ��NULL
		p = pNew;//ָ���м����ָ���´�����Ԫ

	}
	return pHead;
}