# include <stdio.h>
# include <time.h>

clock_t start,stop;
double duration;

void printN(int N)
{
	printf("%d\n", N);
    N--;
	if(N>0)	
	    printN(N);//运行会崩溃，下次调试
	
	
		
}
int main(void)
{
	int N,i,j;
	
	scanf("%d",&N);
	
	start = clock();/*clock()捕捉从程序开始运行到clock（）被调用时所耗
	时间。这个时间单位是clock tick，即“时钟打点”*/
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
/*测试结果
法1：N=100 结果：
法2：N=100 结果：2.622
*/