/*
时间：2020年11月16日19:47:26
功能：用数组实现两个有序表的合并
算法：将其中一个数组的每个元素分别与另一个数组比较，然后插入，
组成一个新的数组，再用第一个数组的下一个元素与新数组比较，以此类推
缺点：时间复杂度最坏情况为O(2n!/n!)

*/

# include <stdio.h>

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
	a[i-1] = value;//将元素插入下标为[i-1]的后一个位置，即第i个
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
	return i;//返回的i表示value处于a[i-1]到a[i]之间

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