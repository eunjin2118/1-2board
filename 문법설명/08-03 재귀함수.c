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
//int factorial(int num) 지역변수는 반환되고 사라짐
//{
//	return num+1함수를 반환한다 끝낸다
//}
//
//void main(void)
//{
//	factorial(2)
//}
//ob00000111 = 2진수로 하려면 저렇게 해야됨 =7
//0x3b 16진수 = b는 11(10진수로 하면)d