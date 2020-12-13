#include <stdio.h>
// 사용자로 부터 두 수를 받아 최대공약수를 구하는 함수

int GCD(int num1, int num2);

int main(void)
{
	printf("최대 공약수를 구할 두 정수를 입력:");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	(num1 > num2) ? GCD(num2, num1) : GCD(num1, num2); // 큰 수에서 부터 해나가면 성립이 이상하게되서 작은수로부터 해야함
	return 0;
}

int GCD(int num1, int num2)
{
	for (int i = num1; i > 0; i--) // num1보다 작은 수대로 계속 나누어 나머지가 없는수가 최대 공약수
	{
		if (num1%i == 0 && num2%i == 0)
		{
			printf("최대 공약수는 %d \n", i);
			return;
		}
	}
}