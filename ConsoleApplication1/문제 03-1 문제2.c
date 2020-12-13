#include <stdio.h>
//사용자로부터 세 개의 정수를 받아 연산결과를 출력하는 함수

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수를 차례로 입력하시오.");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("결과:%d \n", num1*num2 + num3);

	return 0;
}