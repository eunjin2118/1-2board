#include <stdio.h>

void Swap(int* num1, int* num2) {

}

void main(void) 
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
	Swap(&a, &b);
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
}

void Swap(int* num1, int* num2)
{
	int temp; 
	temp = *num1; // temp=10 / temp�� 10�� �����ؾ��ϱ� ������ int���� ���� 
	*num1 = *num2; // a : 20 / num1�� �ּҰ��� ������ ������ �ּҰ��� ���� ���������� *�� ����� 
	*num2 = temp; //b : 10
}