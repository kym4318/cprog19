#include<stdio.h>

int main()
{
	int germ=10;
	int time;
	for(time=1; time<=7; time++)
	{
		germ*=4;
	}
	printf("세균의 개수:%d\n",germ);
	return 0;
}
