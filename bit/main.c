#include<stdio.h>
#include<assert.h>
extern unsigned int clear_bit();
extern int set_bit();
extern int get_bit();
extern int print_bit();
extern int count;
int main()
{
	unsigned int n = 0, v = 1, i = 0;
	print_bit(n);
	printf("ith = ");
	scanf("%u", &i);
	printf("value = ");
	scanf("%u", &v);
	
	n = set_bit(n, v, i);
	assert(v == get_bit(n, i));
	print_bit(n);	
}
