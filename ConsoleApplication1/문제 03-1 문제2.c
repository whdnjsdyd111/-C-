#include <stdio.h>
//����ڷκ��� �� ���� ������ �޾� �������� ����ϴ� �Լ�

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ������ ���ʷ� �Է��Ͻÿ�.");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("���:%d \n", num1*num2 + num3);

	return 0;
}