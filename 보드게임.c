/*
*	������� ����� 21.05.13
*	1. ��ü ĭ�� ���� 61��
*	2. �÷��̾ ������ �־�� �� ��
*		- ��ġ����(��) : 0 ���� ����
*		- �� : 5,000,000 ���� ����
*		- ������ �κ��丮 (���߿� �����ϸ�)
*   3. �Ļ���
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//ĭ�� �ִ밹��
	int max_length = 61;

	//�÷��̾��� ��ġ
	int position = 0;

	//�ֻ���
	int dice;

	int money = 5000000;

	srand(time(0));
	rand();

	printf("������ġ : %d, ���� �� : %d\n\n", position, money);

	while (1)
	{
		//�ֻ����� ������ ���ؼ��� ����Ű�� ������ �Ѵ�.
		//�ֻ��� ������ (1���� 6����)
		dice = rand() % 6 + 1;
		position = position + dice;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n", dice);
		printf("������ġ : %d, ������ : %d\n\n", position, money);
		getchar();
		
		//7���� �������� 3������ �̵�
		if (position == 7)
		{
			printf("3�� ��ġ�� �̵��մϴ�.");
			position = 3;
			printf("������ġ : %d, ������ : %d\n\n", position, money);
		}
		
		if (position == 15)
		{
			printf("�ֽ��� ������ 200������ �����˴ϴ�.\n");
			money -= 2000000;
			printf("������ġ : %d, ������ : %d\n\n", position, money);
		}

		//�Ļ�ó��
		if (money <= 0)
		{
			printf("�Ļ��Ͽ����ϴ٤ФФ�.\n");
			break; //while ��
		}
		if (position > 61)
		{
			printf("�����մϴ�. �������� �����Ͽ����ϴ�.\n");
			break;
		}
	}//While �� ��
	printf("������ �������ϴ�.");
}