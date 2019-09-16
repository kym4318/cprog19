#include <stdio.h>
int main(void)
{
	int height;
	int width;
	float area;

	printf("높이를 입력하시오:");
	scanf("%d" , &height);
	printf("밑변을 입력하시오:");
	scanf("%d", &width);
	area= height*width*0.5;
	printf("area= %f",area);
	return 0;
}
