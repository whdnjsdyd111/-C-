#include <stdio.h>
// k를 입력받아 2ⁿ <= k 가 성립되는 n의 최댓값을 구하는 함수

int main(void)
{
	printf("2n <= k 에서 k을 입력 하십시오.");
	int n, k = 0, total = 1;
	scanf_s("%d", &k);

	if (k == 1) 
	{
		printf("n는 0 \n");
		return 0;
	}
	else if (k > 1)
	{
		for (int i = 0; i >= 0; i++)
		{
			total *= 2; // 2의 제곱을 계속 곱하여 2ⁿ보다 작은지 큰지 비교
			n += 1; // n 제곱을 더함

			if (total == k) // 2ⁿ이 k와 같다면 멈춤
			{
				break;
			}

			if (total >= k) // 2ⁿ이 k보다 크면 멈추고 n제곱을 하나뺌 2ⁿ <= k 이라서 왼쪽수가 더크면 안되니까
			{
				n -= 1;
				break;
			}
		}
	}
	printf("n는 %d \n", n);
	return 0;
}