#include <stdio.h>

int factorial(int cuty_num)
{
	if (cuty_num == 1) {
		return 1;
	}
	return cuty_num * factorial(cuty_num-1);
}

void main(void)
{
	int a = factorial(2);
	printf("%d", a);
}






//#include <stdio.h>
//
//int factorial(int num) ���������� ��ȯ�ǰ� �����
//{
//	return num+1�Լ��� ��ȯ�Ѵ� ������
//}
//
//void main(void)
//{
//	factorial(2)
//}
//ob00000111 = 2������ �Ϸ��� ������ �ؾߵ� =7
//0x3b 16���� = b�� 11(10������ �ϸ�)d