# include <stdio.h>
# include <string.h>

int main(void)
{
    char a[100] ;
	char * b = a;
    strcpy(a,"张三");
	printf("%s", b);//b存储数组a的第一个位置的地址，但同时指向a。







    return 0;
}