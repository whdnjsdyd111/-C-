#include <stdio.h>
//하나의 정수를 받아 그 수만큼 3의 배수 구구단실행하는 함수

int main(void)
{
	int num, i=1;
	printf("3의 배수 갯수를 정할 정수입력:");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d\n", i * 3);
		i++;
	}

	return 0;
}