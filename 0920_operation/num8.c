#include <stdio.h>

int main()
{
	int a,b;
	double cal;
	printf("두 정수를 입력하시오:");
	scanf("%d %d\n ", &a,&b);
	
	cal=(double)a / (double)b;
	
	printf("%f\n",cal);
	return 0;
	
}

