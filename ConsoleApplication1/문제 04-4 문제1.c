#include <stdio.h>
//-1을 입력하면 1, 2가 입력되면 -2가 출력되는 함수

int main(void)
{
	int num;
	printf("반대의 구호를 구할 정수:");
	scanf_s("%d", &num);
	printf("결과:%d \n", ~num + 1);
	return 0;
}