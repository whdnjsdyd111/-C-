#include <stdio.h>
//두 실수를 받아 사칙연산을 출력하는 함수

int main(void)
{
	double num1, num2;
	printf("두 실수를 입력 하시오.");
	scanf_s("%lf %lf", &num1, &num2);
	printf("사직연산 덧셈=%f 뺄셈=%f 곱셈=%f 나눗셈=%f", num1 + num2, num1 - num2, num1*num2, num1 / num2);
	return 0;
}
