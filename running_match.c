#include<stdio.h>
#define SIZE 5

int main()
{
	float scores[SIZE],flash;
	int i,j;
	
	
	for(i=0; i<SIZE; i++)
	{
		printf("학생%d:",i+1);
		scanf("%f",&scores[i]);
	}
	
	for(i=0; i<SIZE; i++)
	{
		for(j=i+1; j<SIZE; j++)
		{	if(scores[i]>scores[j])
			{
				flash=scores[i];
				scores[i]=scores[j];
				scores[j]=flash;
			}
		}
	}
	
	for(i=0;i<SIZE;i++)
		printf("%d등: %f\n",i+1,scores[i]);
	
	return 0;
}
