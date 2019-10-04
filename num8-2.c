#include<stdio.h>

void print_bit (unsigned int n)
{
	unsigned int mask = 1 << 31;
	for (int i=0; i<32; i++)
		printf("%u", n & (mask >> i));
	printf("\n");
}

unsigned int get_bit(unsigned int n,unsigned int i)
{
	unsigned int mask = 1 << i;
	return n & mask;
}

unsigned int clear_bit(unsigned int n, unsigned int i)
{
	unsigned int mask = 1 << i;
	return n & ~mask;
}

unsigned int set_bit(unsigned int n, unsigned int v, unsigned int i)
{
	unsigned int mask = v << i;
	unsigned int cn =clear_bit (n,i);
	return cn |=mask;
}

int main() 
{
     unsigned int n = 0; 
     unsigned int i, v, rv; 

     print_bit(n);
     printf("세팅할 비트의 위치와 값을 입력하시오:\n");
     scanf("%u %u",&i, &v);
     n = set_bit(n, i, v); 
     rv = get_bit(n, i); 
     if (rv != v) {
           printf("비트 세팅이 잘못되었습니다\n");
           return -1; 
     }
     print_bit(n);
     return 0; 
}

