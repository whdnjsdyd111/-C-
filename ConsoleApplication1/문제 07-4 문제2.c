#include <stdio.h>
//n�� ����� ���ϴ� �Լ�

int main(void)
{

	printf("����� ���� ������ �Է��Ͻÿ�.");
	int num, total = 1;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total *= i;
	}
	printf("��� ���:%d \n", total);
	return 0;
}