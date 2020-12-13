#include <stdio.h>
// n을 입력받아 2의 n승을 구하는 함수 (재귀함수를 이용)

int Two(int num);
int n = 1;

int main(void)
{
	printf("2의 n 승을 구할 n을 입력 하시오.");
	int num;
	scanf_s("%d", &num);
	Two(num);
	printf("결과: %d \n", n);
	return 0;
}

int Two(int num)
{
	if (num == 0)
	{
		return n;
	}
	n *= 2;
	Two(num - 1);
}