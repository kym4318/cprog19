#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#include<time.h>
int main(void)
{
	int i;
	int scores[SIZE];
 	srand(time(NULL));	
	for(i=0; i<SIZE; i++)
		scores[i] = rand() % 100;
	
	for(i=0; i<SIZE; i++)
		printf("scores[%d]=%d\n",i,scores[i]);

	return 0;
}
