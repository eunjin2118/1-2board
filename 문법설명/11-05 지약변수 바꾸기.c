#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("�ٲٱ� �� %d \n", A);
	//A�� �Ѱ��ֱ� ���ؼ� 
	//A==argument
	//���� A�� �Ѱ� �ִ� ���� �ƴ� A�ȿ� ����ִ� 3�� num���� �Ѱ��ش�
	changeA(A);
	printf("�ٲٱ� �� %d \n", A);
}

//A���� �Ѱ��ֱ� ���� �Ű����� int num
void changeA(int num)
{
	num = 5;
}