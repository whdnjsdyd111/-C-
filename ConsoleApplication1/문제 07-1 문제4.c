#include <stdio.h>
// �������� �������� ������ �Լ�

int main(void)
{
	int num, i=9;
	printf("�������� �������� ����� ���ڸ� �Է�:");
	scanf_s("%d", &num);

	while (i > 0)
	{
		printf("%dX%d = %d \n", num, i, num*i);
		i--;
	}
	return 0;
}