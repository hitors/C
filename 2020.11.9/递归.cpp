/*
功能:将一个二进制数按从左到右的顺序以字符形式打印出来
特点：利用递归实现

*/

# include <stdio.h>

void printfchar (unsigned int value )
{
    unsigned int quotient;
	quotient =  value / 10;
	if(quotient != 0)
		printfchar(quotient);//递归
	putchar(value % 10 + '0');//每次堆顶的变量是value。1 + '0'='1'
}
 int main(void)
 {
    int a = 789;
	printfchar(789);

     return 0;
 }
