# include <stdio.h>
# include <malloc.h>

void creat(int i)
{
    int * p = (int * )malloc((sizeof(int))*i);
}

void find(int * a,int Last,int x)//��������ͷ��ַ�����һ����ЧԪ����ţ���Ҫ���ҵ�Ԫ��
{
    int i,j;
	j = 0;
	printf("���ϵĲ��ҽ�������Ϊ");
	for(i=0;i<Last,i++)
	{
	    if(x==a[i])
		{
			printf("%d\n", (i+1));//������ϵ�Ԫ�����
			j++;
		}   
	}
    
	printf("%d", j);//������ϵ�Ԫ�ظ���
}




void cut (int * a,int Last,int length, int i, int value)//�������������ͷ��ַ�����һ����ЧԪ����ţ����鳤�ȣ�����λ����ţ��Ͳ���ֵ��
{
    int x;
	if(i>Last)
		printf("��������ȷ�������");
	else if(Last==length)
		printf("�ռ�����");
	for(x=Last;x>=i;x--)
	{
	    a[x] = a [x-1];
	}
	a[i-1] = value;//��Ԫ�ز����±�Ϊ[i-1]�ĺ�һ��λ�ã���[i]
}

void rm(int * a,int Last,int length, int i)
{
    int x;
	for(x=i;x<=(Last-1);x++)
	{
		a[x-1] = a [x];
	}//��a[i]���Ԫ����ǰ��һλ�����ǵ�a[i],�ﵽɾ��Ŀ��
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