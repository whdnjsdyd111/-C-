#include <stdio.h>
// ������ 0�̻��� ������ �� ���� ����

int main(void)
{
	printf("���̸� ���� �� ������ �Է�:");
	int num1, num2, total;
	scanf_s("%d %d", &num1, &num2);
	total = (num1 >= num2) ? (num1-num2) : (num2-num1);

	printf("���:%d \n", total);
	return 0;

}