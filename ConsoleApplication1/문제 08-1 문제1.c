#include <stdio.h>
// 7의 배수 동시에 9의 배수를 구하는 함수

int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 && i % 9 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}