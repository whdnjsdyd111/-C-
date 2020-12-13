#include <stdio.h>
//사용자로부터 하나의 정수를 받아 제곱하는 함수

int main(void)
{
	int num;
	printf("제곱을 구할 정수를 입력:");
	scanf_s("%d", &num);
	printf("결과:%d \n", num*num);
	return 0;

}