#include <stdio.h>
// Reference ������� �� ���ڸ� �ٲپ��

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int temp1 = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp1;
}

int main()
{
	printf("�� ���� �Է�:");
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}