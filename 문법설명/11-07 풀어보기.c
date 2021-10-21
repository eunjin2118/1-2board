#include <stdio.h>

void main(void) 
{
	int a;
	char b;
	double c;

	printf("%d, %d, %d \n", sizeof(a), sizeof(b), sizeof(c));

	int* d;
	char* e;
	double* f;

	printf("%d, %d, %d \n", sizeof(d), sizeof(e), sizeof(f));
}
