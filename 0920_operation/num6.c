#include <stdio.h>
int main(void)
{
	int num;
	printf("정수를 입력하시오:");
	scanf("%d",&num);
	

	printf("%d \n", (num%2==0) ?1:0 );
	return 0;
}

