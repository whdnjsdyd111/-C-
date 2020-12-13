#include <stdio.h>
// 사용자로부터 구하고자 하는 소수의 개수를 입력받아 2부터 소수의 개수만큼 출력하는 함수

int PrimeNumber(int num);

int main(void)
{
	printf("구하고자 하는 소수의 개수 ");
	int num;
	scanf_s("%d", &num);
	PrimeNumber(num);
	return 0;
}

int PrimeNumber(int num)
{
	int m = 0; // 나눠진 갯수
	int a = 0; // 소수의 총 갯수

	for (int j = 2; j > 0; j++) // 가장 작은 소수인 2부터 비교를 시작.
	{
		m = 0; // 나누어진 갯수
		for (int k = 1; k <= j; k++) // j를 1부터 j까지 계속 나눔
		{
			if (j%k == 0) // 나머지가 없으면 배수이므로 나누어진 갯수를 더하는 것을 반복
			{
				m += 1;
			}
		}

		if ( m == 2) // 위의 반복문에서 최종적으로 나누어진 갯수가 2개라면 소수임.
		{
			printf("%d ", j); // 소수를 출력하고
			a += 1;           // 소수의 총 갯수를 더함
		}
		if (a == num) // 사용자가 소수를 구하고싶은 갯수와 소수의 총 갯수가 같으면 반복문 탈출
			break;
	}
	return;
}