/*
时间：2020年11月6日20:17:09
作者：黄一展
功能：进行两个数的四则运算。
*/
# include <stdio.h>

int main(void)
{
    double a,b;
	char i ,j;
do
{
	scanf("%lf", &a);
	scanf("%c", &i);
	scanf("%lf", &b);

	if(i == '+')
	{
		double sum;	
		sum = a + b;
		printf("%lf", sum);
	}
	else if(i =='-')
	{
		double sum;	
		sum = a - b;
		printf("%lf", sum);
	}
    else if(i == '*')
	{
		double sum;	
		sum = a * b;
		printf("%lf", sum);
	}
	else if(i == '/')
	{
		double sum;
		sum = a / b;
		printf("%lf", sum);
	}
    
	
	printf("继续请输入Y，否则按其他键退出");
	scanf(" %c", &j);
}
while(j == 'Y'|| j == 'y');
	
    return 0;
	
}
/*
优点：可以直接输入四则计算的表达式
缺点：不能一次计算多个数。

*/
