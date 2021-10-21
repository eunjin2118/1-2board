#include <stdio.h>

void main(void) 
{
	int arr[4];
	//0번째 공간의 주소
	printf("&arr[0]	: %p\n", &arr[0]); //주소값=&
	printf("arr	: %p\n", arr); //&arr[0]와 arr를 찍으면 같음 왜? arr를 찍으면 arr의 시작주소=&arr[0]와 같기 때문

	//1번째 공간의 주소
	printf("&arr[1]	: %p\n", &arr[1]);

	char str[4];
	//0번째 공간의 주소
	printf("&str[0]	: %p\n", &str[0]); //주소값=&
	printf("str	: %p\n", str);

	//1번째 공간의 주소
	printf("&str[1]	: %p\n", &str[1]);
}
