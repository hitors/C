/*
ʱ�䣺2020��11��6��20:17:09
���ߣ���һչ
���ܣ��������������������㡣
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
    
	
	printf("����������Y�������������˳�");
	scanf(" %c", &j);
}
while(j == 'Y'|| j == 'y');
	
    return 0;
	
}
/*
�ŵ㣺����ֱ�������������ı��ʽ
ȱ�㣺����һ�μ���������

*/
