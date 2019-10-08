#include<stdio.h>
#include<assert.h>
 int count;
unsigned int clear_bit(unsigned int n, unsigned int i)
{
	unsigned int mask = 1 << i; 
	return n & ~mask;
}

unsigned int set_bit(unsigned int n, 
	unsigned int v,
	unsigned int i)
{
	unsigned int mask = v << i;
	unsigned int cn = clear_bit(n,i);
	count++;
	return cn |= mask;	
}

unsigned int get_bit(unsigned int n, unsigned int i)
{
	unsigned int mask = 1 << i; 
	count++;
	return (n & mask)? 1 : 0;
}


void print_bit(unsigned int n)
{
	unsigned int mask = 1 << 31;
	for(int i=0; i < 32; i++)
		printf("%u", n & ( mask >> i)? 1 : 0);
	printf("\n");
}



