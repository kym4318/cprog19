#include<stdio.h>
#define BITS_PER_BYTE 8
int main(){

	unsigned int a=513;
	unsigned int shift_cnt=0;
	unsigned int mask = 1;
	int cnt=0;
	while(shift_cnt < sizeof(unsigned int)*BITS_PER_BYTE){
		if(a&mask)
			cnt++;
		mask <<=1;
		shift_cnt++;
	}

	printf("1의 개수%d\n",cnt); 
	return 0;
}
