#include <stdio.h>
//contunue �Լ� �Ǵ� break �Լ��� �̿��Ͽ� 2�� ����� �ܸ� ����ϴ� �Լ�

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == !0)
			continue;

		for (int j = 0; j <= 9; j++)
		{
			printf("%d X %d = %d \n", i, j, i*j);
		}
	}
	return 0;
}