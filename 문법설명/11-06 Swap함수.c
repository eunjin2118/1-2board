#include <stdio.h>

void Swap(int* num1, int* num2) {

}

void main(void) 
{
	int a = 10, b = 20;
	printf("바꾸기 전 a:%d b:%d \n", a, b);
	Swap(&a, &b);
	printf("바꾸기 후 a:%d b:%d \n", a, b);
}

void Swap(int* num1, int* num2)
{
	int temp; 
	temp = *num1; // temp=10 / temp는 10을 저장해야하기 때문에 int형이 맞음 
	*num1 = *num2; // a : 20 / num1은 주소값을 가지고 있으니 주소값의 값을 가져오려면 *를 써야함 
	*num2 = temp; //b : 10
}