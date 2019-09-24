#include<stdio.h>
#include<string.h>

int main()
{
	
	int birth;
	char season[10];

	printf("태여난 월을 입려하세요:");
	scanf("%d",&birth);
	
	switch(birth)
	{
		case 3:
		case 4:
		case 5:
			strcpy(season,"spring");	
			break;
		case 6:
		case 7:
		case 8:
			strcpy(season,"summer");
			break;
		case 9:
		case 10:
		case 11:
			strcpy(season,"autum");
			break;
		case 12:
		case 1:
		case 2:
			strcpy(season,"winter");
			break;
	}
	printf("%s에 태어났군요\n",season);
	return 0;
}
