/*
ʱ�䣺2020��11��16��19:47:26
���ܣ�������ʵ�����������ĺϲ�
�㷨��������һ�������ÿ��Ԫ�طֱ�����һ������Ƚϣ�Ȼ����룬
���һ���µ����飬���õ�һ���������һ��Ԫ����������Ƚϣ��Դ�����
ȱ�㣺ʱ�临�Ӷ�����ΪO(2n!/n!)

*/

# include <stdio.h>

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
	a[i-1] = value;//��Ԫ�ز����±�Ϊ[i-1]�ĺ�һ��λ�ã�����i��
}

int compare(int * group, int length, int value)
{
    int i;
	for(i=0;i<length;i++)
	{
	    if(group[i]>value)
		{
			return i;	
		}
	}
	return i;//���ص�i��ʾvalue����a[i-1]��a[i]֮��

}



int main(void)
{
	int a[6]={1,8,9,0,0,0};
	int b[3]={2,6,12};
    int i,j,k;

	for(j=0;j<3;j++)
	{
	    i = compare(a,3+j,b[j]);
		cut(a,3+j,6,i+1,b[j]);
	}

	for(k=0;k<6;k++)
	{
	    printf("%d \ ", a[k]);
	}









    return 0;
}