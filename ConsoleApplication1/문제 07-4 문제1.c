#include <stdio.h>
// 입력받은 두 수 사이의 수들의 합

int main(void)
{
	printf("두 수 사이의 합을 구할 정수를 입력하시오.");
	int num1, num2, total = 0;
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		total += i;
	}
	printf("결과:%d", total);
	return 0;
}