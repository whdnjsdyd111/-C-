#include <stdio.h>
//�Ǻ���ġ ���� �Լ�

int P(int num);

int main(void)
{
	printf("�Ǻ���ġ ������ ���� ���� �Է�:");
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