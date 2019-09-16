#include <stdio.h>
int main(void)
{
	int num_stu;
	float A;
	float B;
	float C;

	printf("학생의 수를 입력하시오:");
	scanf("%d",&num_stu);

	A=num_stu*0.2;
	B=num_stu*0.6;
	C=num_stu-A-B;
	
	printf("%f\n" ,A);
	printf("%f\n" ,B);
	printf("%f\n" ,C);
 
	return 0;
}
