#include<stdio.h>
int three_times_table(int n)
{
	printf("3 x %d = %d\n",n,n*3);
	if (n<9){
		three_times_table(n+1);
	}
	
}
int main()
{
	printf("%d",three_times_table(1));
}
