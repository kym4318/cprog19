#include<stdio.h>

int main(void)
{
	int nums[10]={3,8,1,1,2,5,2,4,3,6};
	int j=0;
	int i;
	while(j<10)
	{	for(i=j+1;i<10;i++)
			if(j!=i){
				if(nums[j]+nums[i]>=10)
					printf("arr[%d]=%d, arr[%d]=%d\n",j,nums[j],i,nums[i]);
			}
	   	j++;
	}
	return 0;
}
				
