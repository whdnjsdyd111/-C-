#include <stdio.h>
// Call-By-Value ����� �����Լ��� Call-By-Reference ����� �����Լ��� ���

int SquareByValue(int num)
{
	return num*num;
}

int SquareByReference(int *ptr)
{
	int num = *ptr;
	*ptr = num*num;
}

int main()
{
	printf("���� �Է�:");
	int num;
	scanf_s("%d", &num);

	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}