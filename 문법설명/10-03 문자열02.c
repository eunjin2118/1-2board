#include <stdio.h>

void main(void)
{
	//nul�� ��ġ�� 12����
	char str[12] = "Hello World"; 

	//�ι���('\0')�� �ƴҶ����� ���
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
}