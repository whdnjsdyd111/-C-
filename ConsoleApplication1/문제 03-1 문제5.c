#include <stdio.h>
//����ڷκ��� �� ���� ������ �޾� �������� ����ϴ� �Լ�

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ������ �Է�:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("���:%d \n", (num1 - num2)*(num2 + num3)*(num3%num1));
	return 0;
}