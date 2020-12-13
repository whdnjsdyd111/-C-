#include <stdio.h>
//사용자로 부터 2개의 정수를 받아 두 수 사이의 구구단을 출력하는 함수

int main(void)
{
	int num1, num2;
	printf("두개의 정수를 입력하시오.");
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i <=num2; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%dX%d=%d \n", i, j, i*j);
		}
	}
	return 0;
}