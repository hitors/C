# include <stdio.h>
# include <malloc.h>

void f(int * p,int len);
void h(int *r,int len);
void g (int * q,int len);

int main(void)
{
    int * a;
    int len;

	printf("请输入排序的个数");
	scanf("%d", &len);
	a = (int*)malloc((sizeof(int))*len);
	f(a,len);//输入排序数
	printf("这些数由大到小的顺序为");
	g(a,len);//排序
	h(a,len);//输出
	
    return 0;
	
}

void f(int * p,int len)
{
    int i,j;
	for (i=0;i<len;i++)
	{
		scanf("%d", &j);
		p[i] = j;
	}
}

void g (int * q,int len)
{
    int i;
	int j;
	int c;
	for(i=0;i<len-1;i++)
	{
	    for(j=i;j<(len-1);j++)
		{
			if(q[j]<q[j+1])
			{		    
				c =q[j];
				q[j]=q[j+1];
				q[j+1]=c;				
			}
		}
	}
}

void h(int *r,int len)
{
    int i;
	for(i=0;i<len;i++)
	{
		if(i != (len - 1))
		{
		    printf("%d > ", r[i]);
		}
		else
			printf("%d", r[i]);
	}

}