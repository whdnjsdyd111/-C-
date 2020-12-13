#include <stdio.h>
// switch 함수로 나타내기 애매한 상황 극복하는 함수

int main(void)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	int n = num / 10;

	switch (n)
	{
	case 0:
		printf("0이상 10미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break;
	case 2:
		printf("20이상 10미만 \n");
		break;
	default:
		printf("30이상 \n");
		break;
	}
	return 0;
}