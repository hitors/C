# include <stdio.h>
# include <time.h>

clock_t start,stop;
double duration;

void printN(int N)
{
	printf("%d\n", N);
    N--;
	if(N>0)	
	    printN(N);//���л�������´ε���
	
	
		
}
int main(void)
{
	int N,i,j;
	
	scanf("%d",&N);
	
	start = clock();/*clock()��׽�ӳ���ʼ���е�clock����������ʱ����
	ʱ�䡣���ʱ�䵥λ��clock tick������ʱ�Ӵ�㡱*/
	for(j=0;j<=100;j++)
	{
		for(i=0;i<=N;i++)
		{
			printf("%d\n", i);
	     }
         //printN(100);

	}
	
	stop = clock();
	duration = ((double)(stop - start))/CLOCKS_PER_SEC;
	printf("%lf",duration);
    
	
	return 0;
}
/*���Խ��
��1��N=100 �����
��2��N=100 �����2.622
*/