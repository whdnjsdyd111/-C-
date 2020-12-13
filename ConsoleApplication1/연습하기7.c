#include <stdio.h>

int main()
{
	int total2 = 0, total3 = 0; // 2의 배수와 3의 배수 총합 변수를 선언

	for (int i = 1; i <= 500; i++) // 1부터 500까지의 반복문
	{
		if (i % 2 == 0) // i를 2로 나누었을 때 나머지가 0이면 2의 배수이므로 총합에 더해준다.
			total2 += i;
		if (i % 3 == 0) // 위와 마찬가지
			total3 += i;
	}

	printf("결과: %d \n", total2 - total3); // 2의 배수 총합과 3의 배수 총합의 차를 출력
	return 0;
}