#include <stdio.h>


void print(int* ptr);
void erase(int* ptr[]);


void main(void)
{
	int arr[4] = { 10,20,30,40 };
	erase(arr);
	print(arr);
}

void print(int* ptr[]) //ptr변수는 배열변수라는것을 알려줌
{
	for (int i = 0; i < 4; i++) {
		//printf("%d", *(ptr+i));
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

//배열의 모든 요소(element)를 출력
void erase(int* ptr[])
{
	for (int i = 0; i < 4; i++) {
		//*(ptr+i) = 0
		ptr[i] = 0;
	}
}
