#include <stdio.h>
// �Է¹��� �� �� ������ ������ ��

int main(void)
{
	printf("�� �� ������ ���� ���� ������ �Է��Ͻÿ�.");
	int num1, num2, total = 0;
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		total += i;
	}
	printf("���:%d", total);
	return 0;
}