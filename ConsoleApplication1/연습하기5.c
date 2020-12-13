#include <stdio.h>

int main()
{
	int n = 3;
	if (n > 0) // n은 0보다 크므로 이 if 함수를 시작, ①은 무쓸모
	{
		n *= 2; // 여기서 n = n * 2 이므로 n = 6
		if (n < 5) // n은 5보다 크다. 이 함수말고 다음 else로 넘어가자
		{
			n += 5;
		}
		else // n은 6보다 크므로 이 함수를 실행
		{
			n -= 5; // 여기서 n = n - 5 이므로 n 은 1
		}
	}
	else // ①
	{
		n++;
	}
	printf("n = %d \n", n);
	return 0;
}