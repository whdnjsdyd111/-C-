#include <stdio.h>
//contunue 함수 또는 break 함수를 이용하여 2의 배수의 단만 출력하는 함수

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == !0)
			continue;

		for (int j = 0; j <= 9; j++)
		{
			printf("%d X %d = %d \n", i, j, i*j);
		}
	}
	return 0;
}