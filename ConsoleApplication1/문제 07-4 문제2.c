#include <stdio.h>
//n의 계승을 구하는 함수

int main(void)
{

	printf("계승을 구할 정수를 입력하시오.");
	int num, total = 1;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total *= i;
	}
	printf("계승 결과:%d \n", total);
	return 0;
}