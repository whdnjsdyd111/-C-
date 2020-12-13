#include <stdio.h>
//10진수를 입력 받아 16진수로 표현

int main(void)
{
	int num;
	printf("10진수를 16진로..");
	scanf_s("%d", &num);
	printf("%x", num);

	return 0;
}