#include <stdio.h>
//����ڷ� ���� 2���� ������ �޾� �� �� ������ �������� ����ϴ� �Լ�

int main(void)
{
	int num1, num2;
	printf("�ΰ��� ������ �Է��Ͻÿ�.");
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i <=num2; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%dX%d=%d \n", i, j, i*j);
		}
	}
	return 0;
}