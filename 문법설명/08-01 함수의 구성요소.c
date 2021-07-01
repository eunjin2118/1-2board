#include <stdio.h>

int sum(int num1, int num2)
{
	/*return 3 // sum을 3으로 반환한다 */
	return = num1 + num2;
}

void main(void)
{
	int a = 1, b = 2;
	int c ; //데이터 타입 맞춰주기
	c = sum();
	printf("c의값은 %d \n", c);
}

//int num1= 매개변수
//sum는 함수의 이름
//void는 빈공간(값이 없다 그래서int로 바꿔줘야함 void로 써준다면 sum은 값이 없다는 뜻(값을 넘겨줘야되는데 못넘겨줘서 에러남)
// return 을 못함 보이드는 출력은 할 수 있음 함수 자체가 값이 될 수 없고 값을 넘겨줘야되니까 보이드 섬 보이드를 하면 안됨
//매개변수가 있으면 매개변수에 값을
//%d 
//int반환형
//
