#include <stdio.h>
//하나의 정수를 받아 그 수만큼 hello world! 출력하는 함수

int main(void)
{
	int num, i = 0;
	printf("양의 정수 입력:");
	scanf_s("%d", &num);

	while (i < num)
	{
		printf("hello world! \n");
		i++;
	}
	return 0;
}