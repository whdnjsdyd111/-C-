#include <stdio.h>
// 1~100 ������ ���ڿ��� 2�� ����� ���ϴ� �Լ�

int main(void)
{
	int i = 2;
	int total = 0;

	do
	{
		total += i;
		i+=2;
	} while (i < 101);
	printf("%d", total);
	return 0;
}