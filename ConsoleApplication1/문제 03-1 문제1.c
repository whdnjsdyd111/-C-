#include <stdio.h>
//����ڷκ��� �� ������ �޾� ������ ������ ���ϴ� �Լ�

int main(void)
{
	int num1, num2;

	printf("������ ������ ���� �� ������ �Է�:");
	scanf_s("%d %d", &num1, &num2);
	printf("����:%d, ����:%d \n", num1 - num2, num1*num2);
	
	return 0;
}