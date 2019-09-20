#include<stdio.h>

int main(){

	int  first, second, ass;
	double result;

	printf("중간 기말 과제 점수를 입력하시오.\n");
	scanf("%d %d %d",&first,&second,&ass);
	
	result =first *(double)10/6*0.3 + second*(double)10/7*0.3+ass*(double)10/5*0.4;
	
	printf("변환점수는 %f입니다.\n",result);
	return 0;

}
	
	
