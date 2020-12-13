#include <stdio.h>
//세 개의 정수를 입력 받아 가장 큰 수와 가장 작은 수를 반환하는 함수

void big(int num1, int num2, int num3);
void small(int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;
	printf("세 개의 정수를 입력하시오.");
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
	printf("가장 큰 수는 %d \n", result);
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
	printf("가장 작은 수는 %d \n", result);
}