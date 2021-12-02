#include <stdio.h>

typedef int* p_int;

void main(void)
{
	int num = 3;
	p_int ptr = &num;
	*ptr = 4;
	printf("%d \n", num);
}