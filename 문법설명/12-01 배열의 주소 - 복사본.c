#include <stdio.h>

void main(void) 
{
	int arr[4];
	//0��° ������ �ּ�
	printf("&arr[0]	: %p\n", &arr[0]); //�ּҰ�=&
	printf("arr	: %p\n", arr); //&arr[0]�� arr�� ������ ���� ��? arr�� ������ arr�� �����ּ�=&arr[0]�� ���� ����

	//1��° ������ �ּ�
	printf("&arr[1]	: %p\n", &arr[1]);

	char str[4];
	//0��° ������ �ּ�
	printf("&str[0]	: %p\n", &str[0]); //�ּҰ�=&
	printf("str	: %p\n", str);

	//1��° ������ �ּ�
	printf("&str[1]	: %p\n", &str[1]);
}
