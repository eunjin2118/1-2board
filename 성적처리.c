#include <stdio.h>

//�Է¹��� ����(score)�� ���� ����� ����Ѵ�
void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A�Դϴ� \n");
	else if (80 <= score)
		printf("B�Դϴ� \n");
	else if (70 <= score)
		printf("C�Դϴ� \n");
	else if (60 <= score)
		printf("D�Դϴ� \n");
	else
		printf("E�Դϴ� \n");
}

void main(void)
{
	int C_score;
	printf("�������� �Է��ϼ��� : ");
	scanf_s("%d", &C_score);

	cal_grade(C_score);
	

	int java_score;
	printf("�ڹ������� �Է��ϼ��� : ");
	scanf_s("%d", &java_score);

	cal_grade(java_score);


	int CA_score;
	printf("��ǻ�ͱ��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &CA_score);

	cal_grade(CA_score);
}