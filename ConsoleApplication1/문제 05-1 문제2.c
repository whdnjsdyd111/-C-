#include <stdio.h>
//�� �Ǽ��� �޾� ��Ģ������ ����ϴ� �Լ�

int main(void)
{
	double num1, num2;
	printf("�� �Ǽ��� �Է� �Ͻÿ�.");
	scanf_s("%lf %lf", &num1, &num2);
	printf("�������� ����=%f ����=%f ����=%f ������=%f", num1 + num2, num1 - num2, num1*num2, num1 / num2);
	return 0;
}
