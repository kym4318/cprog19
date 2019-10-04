#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
int main(void)
{
	int i;
		
		srand((unsigned)time(NULL));
		for(i=0; i<10;i++)
			printf("%d\n",1+rand()%MAX);
		return 0;
}

