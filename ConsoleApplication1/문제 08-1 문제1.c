#include <stdio.h>
// 7�� ��� ���ÿ� 9�� ����� ���ϴ� �Լ�

int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 && i % 9 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}