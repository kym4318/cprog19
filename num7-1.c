#include <stdio.h>

int main(void)
{
	int n;
	
	printf("3의 배수 출력 프로그램\n");
	
	n=1;
	while(n<=100)
	{
		if (n%3==0) 
			printf("%d ",n);
		n++;
	}

	return 0;
}
