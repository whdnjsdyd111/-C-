#include <stdio.h>

int main()
{
	printf("평균을 구할 숫자들을 입력하시오. \n");
	printf("0을 입력하면 멈춥니다. \n");

	double total = 0; // 평균값이기 때문에 double 로 선언
	for (int i = 0; i >= 0; i++) // 0이 입력 될때까지 무한히 반복해야 하므로 이렇게 반복문 선언
	{
		int n; 
		scanf_s("%d", &n); // 사용자가 입력을 반복
		total += n; // 총합에 사용자가 입력한 숫자를 더함

		if (n == 0)
		{
			total /= i; // 사용자가 입력한 값이 0이면 총합에 (입력한 횟수) i 를 나누어 평균값을 구함
			break; // 그리고 반복문 빠져 나가기
		}
	}
	printf("지금까지 입력한 숫자의 평균: %f \n", total); //double로 선언하였기 때문에 %f 잊지않기!
	return 0;
}