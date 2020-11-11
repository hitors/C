# include <stdio.h>
# include <math.h>

float sum(float *a,int b,float c)
{
    float sum = a[b-1];
	int i;

	for(i=b;i>1;i--)
	{
		sum = (a[i-2]+c*sum);//时间复杂度为O（n）
	}
	return sum;
}

float sum2(float *a,int b,float c)
{
    float sum = 0;
	int i;

	for(i=0;i<b;i++)
	{
	    sum +=(a[i] * power(c,i));
	}

}
int main(void)
{
	float a[10]={1,2,3,4,5,6,7,8,9,10};
	float x;
	float y;

    scanf("%f", &x);//输入多项式变量的值

	/*y = sum(a,10,x);
	printf("%f", y);
    */

	y = sum2(a,10,x);
	printf("%f", y);



    return 0;

}
