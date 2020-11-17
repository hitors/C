ad creatlist_tail(void)//尾插法创建一个链表，并且给链表进行初始化
{
    int length;
	int i;
	int coef;
	int expon;

	ad pHead =(ad)malloc(sizeof(struct List));//创造一个数据单元，pHead指向该空间
	if(pHead==NULL)
	{
	    printf("分配失败");
		exit(-1);//exit()关闭所有文件，终止正在执行的进程。
	}
	ad p = pHead;//pTail作为中间变量，为接下来循环准备
	p->pNext = NULL;//将指针指向NULL

	printf("请输入创建的节点个数");
	scanf("%d", &length);
    
    for(i=0;i<length;i++)
	{    
		printf("请输入第%d项多项式的系数",i+1);
		scanf("%d",&coef);
		printf("请输入第%d项多项式的次数", i+1);
		scanf("%d",&expon);
        printf("\n");
	    ad pNew = (ad)malloc(sizeof(struct List));
		if(pNew==NULL)
		{
		    printf("分配失败");
			exit(-1);//exit()关闭所有文件，终止正在执行的进程。
		}

		pNew->coef = coef;
		pNew->expon = expon;
		p->pNext = pNew;//之前创建的单元内的指针指向新创建的单元
		pNew->pNext = NULL;//将新创建的单元内的指针指向NULL
		p = pNew;//指针中间变量指向新创建单元

	}
	return pHead;
}