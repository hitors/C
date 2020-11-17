/*
缺陷：人机交互时很变扭，对结点内数据初始化时顺序得反过来

*/

ad creatlist_head(void)//头插法建立链表
{
	ad p;
	int length;
	int i;
	int coef;
	int expon;

	ad pTail =(ad)malloc(sizeof(List));//创造一个数据单元，pHead指向该空间
	p = pTail;

	if(pTail==NULL)
	{
	    printf("分配失败");
		exit(-1);//exit()关闭所有文件，终止正在执行的进程。
	}

	printf("请输入链表的长度");
	scanf("%d", &length);

	for(i=0;i<length;i++)
	{
		printf("请输入第%d项多项式的系数",i+1);
		scanf("%d",&coef);
		printf("请输入第%d项多项式的次数", i+1);
		scanf("%d",&expon);

	    ad pNew = (ad)malloc(sizeof(List));

		if(pNew==NULL)
		{
		    printf("分配失败");
			exit(-1);//exit()关闭所有文件，终止正在执行的进程。
		}

		pNew->coef = coef;
		pNew->expon = expon;
		pNew->pNext = p;
		p = pNew;//无头指针，即首元结点为头结点
	}

	return p;
}

