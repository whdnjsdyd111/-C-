#include <stdio.h>
// ����ڷ� ���� �� ���� �޾� �ִ������� ���ϴ� �Լ�

int GCD(int num1, int num2);

int main(void)
{
	printf("�ִ� ������� ���� �� ������ �Է�:");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	(num1 > num2) ? GCD(num2, num1) : GCD(num1, num2); // ū ������ ���� �س����� ������ �̻��ϰԵǼ� �������κ��� �ؾ���
	return 0;
}

int GCD(int num1, int num2)
{
	for (int i = num1; i > 0; i--) // num1���� ���� ����� ��� ������ �������� ���¼��� �ִ� �����
	{
		if (num1%i == 0 && num2%i == 0)
		{
			printf("�ִ� ������� %d \n", i);
			return;
		}
	}
}