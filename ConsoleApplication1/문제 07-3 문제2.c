#include <stdio.h>
// 1~100 사이의 숫자에서 2의 배수만 더하는 함수

int main(void)
{
	int i = 2;
	int total = 0;

	do
	{
		total += i;
		i+=2;
	} while (i < 101);
	printf("%d", total);
	return 0;
}