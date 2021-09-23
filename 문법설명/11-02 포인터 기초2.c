#include <stdio.h>

void main(void)
{
	int num1 = 3;
	//num1이 들어가는게 아니라 num1에 있는 값을 복사하는것
	int a = num1; 
	printf("num1은 %d, a는 %d\n", num1, a);
	a = 4;
	printf("num1은 %d, a는 %d\n", num1, a);

	int num2 = 30;
	int* ptr = &num2;
	printf("num2는 %d, ptr는 %p\n", num2, ptr);

	//ptr이 가리키는 변수(num2)의 내부값을 40으로 바꾼다.
	*ptr = 40;
	printf("num2는 %d, ptr는 %p\n", num2, ptr);

	//변수(num2)의 내부값을 50으로 바꾼다.
	num2 = 50;
	printf("num2는 %d, ptr는 %p\n", num2, ptr);
}