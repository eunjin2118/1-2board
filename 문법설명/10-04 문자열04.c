#include <stdio.h>

void main(void)
{
	char str[20] = "Hellow World";

	//w������ �� ���ڸ� �־ ���ڿ��� ����
	//���� �ϳ��� ��Ÿ���� ��������ǥ('')
	str[7] = '\0';
	printf("%s", str);
}