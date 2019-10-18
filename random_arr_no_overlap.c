#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define RANGE 100

int main(void)
{
	int i;
	int k;
	int j;
	int scores[SIZE];
	int num[RANGE]; 
	


 	while(k>3)
		k=0;
		for(j=1; j<SIZE; j++) 
			if(scores[k]==scores[j])
				scores[j]=rand()%100;
		k++;	
	for(i=0; i<SIZE; i++)
		scores[i] = rand() % 100;
	
	for(i=0; i<SIZE; i++)
		printf("scores[%d]=%d\n",i,scores[i]);
	
	
	return 0;
}
