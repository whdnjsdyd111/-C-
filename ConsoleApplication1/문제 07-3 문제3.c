#include <stdio.h>
// do �Լ��� ����Ͽ� �������� ����ϴ� �Լ�

int main(void)
{
	int i = 2, j = 1;

	do
	{
		j = 1;

		do
		{
			printf("%d X %d = %d \n", i, j, i*j);
			j++;
		} while (j < 10);
		i++;
	} while (i < 10);
	return 0;
}