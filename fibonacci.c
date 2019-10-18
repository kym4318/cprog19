#include<stdio.h>
int fibonacci(int n)
{	
	if(n==0) return 0;
	else 
		if( n==1) return 1;
	else 
		return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int month;

	printf("몇 개월 후의 토끼 쌍을 구할 것인가:");
	scanf("%d",&month);
	
	printf("%d개월 후의 토끼 쌍의 개수:%d\n",month,fibonacci(month));
}
