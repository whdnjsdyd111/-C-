#include <stdio.h>
//5개의 정수를 받아 합을 구함. 대신 0이하의 수가 받으면 다시 입력해야하는 함수

int main(void)
{
	int i = 0, num = 0, result = 0;
	printf("5개의 정수를 입력하시오. \n");

	while (i < 5)
	{
		scanf_s("%d", &num);

		while (num <= 0)
		{
			printf("다시 입력하시오. \n");
			scanf_s("%d", &num);
		}
		result += num;
		i++;
	}
	printf("결과: %d", result);
	return 0;
}