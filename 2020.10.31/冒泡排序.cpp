# include <stdio.h>
# include <malloc.h>

void f(int * p,int len);
void h(int *r,int len);
void g (int * q,int len);

int main(void)
{
    int * a;
    int len;

	printf("����������ĸ���");
	scanf("%d", &len);
	a = (int*)malloc((sizeof(int))*len);
	f(a,len);//����������
	printf("��Щ���ɴ�С��˳��Ϊ");
	g(a,len);//����
	h(a,len);//���
	
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