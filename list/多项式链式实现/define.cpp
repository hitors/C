# include<stdio.h>
# include<malloc.h>
# include<stdlib.h>


typedef struct List * ad;//ad Ϊָ�������ָ������
struct List
{
        int coef;//ϵ��
	int expon;//ָ��
	ad pNext;
};

