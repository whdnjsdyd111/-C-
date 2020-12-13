#include <stdio.h>
//do 함수를 while 함수로 바꿔 만든 함수

int main(void)
{
	int total = 0, num;

	printf("정수 입력(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
}