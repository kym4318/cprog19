#include <math.h>
#include <stdio.h>

int get_height()
{
	float hypotenuse, height, degrees, radians;
	printf("빗변의 길이:");
	scanf("%f", &hypotenuse);
	
	printf("각도(단위는 도):");
	scanf("%f",&degrees);

	radians = degrees * (3.141592/180);	
	height=hypotenuse * sin(radians);
	
	printf("높이는 %f\n",height);
}

int main(void)
{
	get_height();
	return 0;
}
