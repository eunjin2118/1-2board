#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("바꾸기 전 %d \n", A);
	//A를 넘겨주기 위해서 
	//A==argument
	//변수 A를 넘겨 주는 것이 아닌 A안에 들어있는 3을 num에게 넘겨준다
	changeA(A);
	printf("바꾸기 후 %d \n", A);
}

//A값을 넘겨주기 위한 매개변수 int num
void changeA(int num)
{
	num = 5;
}