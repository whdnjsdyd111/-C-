#include <stdio.h>
//�� ���� ������ �Է� �޾� ���� ū ���� ���� ���� ���� ��ȯ�ϴ� �Լ�

void big(int num1, int num2, int num3);
void small(int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;
	printf("�� ���� ������ �Է��Ͻÿ�.");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	big(n1, n2, n3);
	small(n1, n2, n3);
	return 0;
}

void big(int num1, int num2, int num3)
{
	int result;

	if (num1 > num2)
	{
		result = (num1 > num3) ? (num1) : (num3);
	}
	else if (num1 < num2)
	{
		result = (num2 > num3) ? (num2) : (num3);
	}
	printf("���� ū ���� %d \n", result);
}

void small(int num1, int num2, int num3)
{
	int result;

	if (num1 < num2)
	{
		result = (num1 < num3) ? (num1) : (num3);
	}
	else if (num1 > num2)
	{
		result = (num2 < num3) ? (num2) : (num3);
	}
	printf("���� ���� ���� %d \n", result);
}