#include <stdio.h>
//정수를 받아 그 수만큼의 숫자를 받아 합을 구하는 함수

int main(void)
{
	printf("몇 개의 정수를 입력 할것인가?");
	int i, result=0;
	scanf_s("%d", &i);

	printf("그 갯수만큼 정수를 입력하시오. \n");
	while (i > 0)
	{
		int num;
		scanf_s("%d", &num);
		result += num;
		i--;
	}
	printf("결과:%d \n", result);
	return 0;
}