// printf�Լ� ���
#include <stdio.h>

// malloc, free �Լ� ���
#include <stdlib.h>

void main(void)
{
	// ���������� �Ҵ�� �迭(stack ������ �Ҵ�)
	int arr[4] = { 10,20,30,40 };

	int count; //stack������ �Ҵ�(��������)
	printf("���ϴ� int������ ������ �Է��Ͻÿ� : ");

	count = 4;
	//scanf_s("%d", &count); //�ּҰ��� �Ѱ���� ��
	
	//Ű���� �Է°����� ���α׷� ����ӿ� �����
	//malloc���� �Ҵ�� �޸� ũ��� Ű����� �Է��� ���� ����
	int* ptr = malloc(sizeof(int) * count);
	ptr[0] = 10; ptr[1] = 20; ptr[3] = 30; ptr[4] = 40;

	// �����Ҵ�� �޸𸮸� ����
	free(ptr);


}