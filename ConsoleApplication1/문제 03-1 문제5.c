#include <stdio.h>
//사용자로부터 세 개의 정수를 받아 연산결과를 출력하는 함수

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수를 입력:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("결과:%d \n", (num1 - num2)*(num2 + num3)*(num3%num1));
	return 0;
}