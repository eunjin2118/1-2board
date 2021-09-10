#include <stdio.h>

void main(void)
{
	char str[20] = "Hellow World";

	//w다음에 널 문자를 주어서 문자열을 끝냄
	//문자 하나를 나타날땐 작은따옴표('')
	str[7] = '\0';
	printf("%s", str);
}