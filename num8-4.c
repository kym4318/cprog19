#include <stdlib.h>
#include <stdio.h> 
#include <time.h>

void dice(void)
{
	int r;
	srand((unsigned)time(NULL));
	r=rand() % 10 +1;

	if (r>=7 && r <=8)
	{
		r=1;
		printf("%d\n",r);
	}	
	else if (r>=9 && r<=10)
	{
		r=2;
		printf("%d\n",r);
	}
	
	else
	{
		printf("%d\n",r);
	}
}

int main()
{
	dice();
	return 0;
}
