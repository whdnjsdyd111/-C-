#include <stdio.h>
//아스키 코드인 A가 입력되면 65가 출력되는 함수

int main(void)
{
	char num;
	scanf_s("%c", &num);
	printf("%d", num);
	return 0;
}