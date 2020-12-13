#include <stdio.h>
//피보나치 수열 함수

int P(int num);

int main(void)
{
	printf("피보나치 수열을 구할 갯수 입력:");
	int num;
	scanf_s("%d", &num);
	P(num);
	return 0;
}

int P(int num)
{
	int total = 0, total2 = 1;

	if (num == 1)
	{
		printf("0");
	}
	else if (num == 2)
	{
		printf("0 1 ");
	}
	else if (num > 2)
	{
		printf("0 1 ");
		for (; num - 2 > 0; num--)
		{
			int total3 = total + total2;
			printf("%d ", total3);
			total = total2;
			total2 = total3;
		}
	}
}