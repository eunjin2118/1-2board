#include <stdio.h>

void main(void)
{
	
	/*for (int dan = 2; dan <= 9; dan++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}*/
	/*
	int i = 1;
	while (i <= 9)
	{
		printf("%d X %d = %d\n", dan, i, dan * i);
		i++;
	}
	*/
	int dan = 2;
	while (dan <= 9)
	{
		int i = 1;
		while (i <= 9) 
		{
			printf("%d X %d = %d\n", dan, i, dan * i);
			i++;
		}
		dan++;
	}
	/*
	printf("%d X 1 = %d\n", dan, dan * 1);
	printf("%d X 2 = %d\n", dan, dan * 2);
	printf("%d X 3 = %d\n", dan, dan * 3);
	printf("%d X 4 = %d\n", dan, dan * 4);
	printf("%d X 5 = %d\n", dan, dan * 5);
	printf("%d X 6 = %d\n", dan, dan * 6);
	printf("%d X 7 = %d\n", dan, dan * 7);
	printf("%d X 8 = %d\n", dan, dan * 8);
	printf("%d X 9 = %d\n", dan, dan * 9);
	*/
}