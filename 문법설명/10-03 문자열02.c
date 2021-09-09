#include <stdio.h>

void main(void)
{
	//nul의 위치는 12번방
	char str[12] = "Hello World"; 

	//널문자('\0')가 아닐때까지 출력
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
}