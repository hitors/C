/*
����:��һ�����������������ҵ�˳�����ַ���ʽ��ӡ����
�ص㣺���õݹ�ʵ��

*/

# include <stdio.h>

void printfchar (unsigned int value )
{
    unsigned int quotient;
	quotient =  value / 10;
	if(quotient != 0)
		printfchar(quotient);//�ݹ�
	putchar(value % 10 + '0');//ÿ�ζѶ��ı�����value��1 + '0'='1'
}
 int main(void)
 {
    int a = 789;
	printfchar(789);

     return 0;
 }
