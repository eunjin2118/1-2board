#include <stdio.h>

//전역변수
int val = 25;

void main(void)
{
	int val = 12;
	//지역변수와 전역변수의 이름이 같은 경우, 지역변수가 우선=지역변수가 출력됨
	printf("%d", val);
}