#include <stdio.h>
//사용자로부터 두 정수를 받아 두 정수간의 몫과 나머지를 구하는 함수

int main(void)
{
	int num1, num2;
	printf("몫과 나머지를 구할 두 정수를 입력:");
	scanf_s("%d %d", &num1, &num2);
	printf("결과, 몫:%d   나머지:%d \n", num1 / num2, num1%num2);
	return  0;
}