#include <stdio.h>
//정수를 받아 사칙연산을 이용하지 않고 연산결과 출력하는 함수

int main(void)
{
	int num;
	printf("정수를 입력:");
	scanf_s("%d", &num);
	printf("결과:%d \n", (num << 3) >> 2);
	return 0;
}