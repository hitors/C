# include <stdio.h>
# include <malloc.h>

void creat(int i)
{
    int * p = (int * )malloc((sizeof(int))*i);
}

void find(int * a,int Last,int x)//输入数组头地址，最后一个有效元素序号，需要查找的元素
{
    int i,j;
	j = 0;
	printf("符合的查找结果的序号为");
	for(i=0;i<Last,i++)
	{
	    if(x==a[i])
		{
			printf("%d\n", (i+1));//输出符合的元素序号
			j++;
		}   
	}
    
	printf("%d", j);//输出符合的元素个数
}




void cut (int * a,int Last,int length, int i, int value)//向函数输入数组的头地址，最后一个有效元素序号，数组长度，插入位置序号，和插入值。
{
    int x;
	if(i>Last)
		printf("请输入正确插入序号");
	else if(Last==length)
		printf("空间已满");
	for(x=Last;x>=i;x--)
	{
	    a[x] = a [x-1];
	}
	a[i-1] = value;//将元素插入下标为[i-1]的后一个位置，即[i]
}

void rm(int * a,int Last,int length, int i)
{
    int x;
	for(x=i;x<=(Last-1);x++)
	{
		a[x-1] = a [x];
	}//将a[i]后的元素向前移一位，覆盖掉a[i],达到删除目的
}

int main(void)
{
    
	int i;
	for(i=0;i<5;i++)
	{
	    printf("%d", p[i]);
	}

	

    return 0;
}