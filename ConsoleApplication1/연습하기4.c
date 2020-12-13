#include <stdio.h>

int main()
{
	int i;
	int n = 0;
	for (i = 0; i < 10; i++) // i 가 10이 될때까지 반복하는 반복문
	{
		if (i % 3 != 0) // i 를 3으로 나누었을 때 나머지가 0이 아니면 n += i 를 실행하지않고 바로 다시 반복.
			continue;   // 즉 3으로 나누었을 때 나머지가 0인, 3의 배수만 n += i 로 넘어간다는 소리
		n += i; // 3, 6, 9 까지만 걸러져서 n 과 더해짐 즉 결과는 18
	}
	printf("n = %d \n", n);
	return 0;
}