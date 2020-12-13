#include <stdio.h>
//65를 입력 받으면 아스키 코드인 A가 입력되는 함수

int main(void)
{
	int num;
	scanf_s("%d", &num);
	printf("%c \n", num);
	return 0;
}