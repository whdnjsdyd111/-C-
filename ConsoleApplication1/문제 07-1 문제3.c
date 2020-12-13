#include <stdio.h>
//정수를 계속 받고 0이 되면 멈추고 받은 정수들의 합을 구하는 함수

int main(void)
{
	int num, result=0;
	printf("더할 정수를 계속 입력하시오. 0이되면 합을 멈추고 정산을 함.\n");

	while (num == 0)
	{
		scanf_s("%d", &num);
		result += num;
	}
	printf("총 합 %d", result);
	return 0;
}