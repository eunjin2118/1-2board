#include <stdio.h>

void main(void)
{
	int count; //stack������ �Ҵ�(��������)
	printf("���ϴ� int������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &count); //�ּҰ��� �Ѱ���� ��
	
	//Ű���� �Է°����� ���α׷� ����ӿ� �����
	//malloc���� �Ҵ�� �޸� ũ��� Ű����� �Է��� ������ ����
	int* ptr = malloc(sizeof(int) * count);


}