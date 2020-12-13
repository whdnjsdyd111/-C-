#include <stdio.h>
// 구구단을 역순으로 나오는 함수

int main(void)
{
	int num, i=9;
	printf("역순으로 구구단을 출력할 숫자를 입력:");
	scanf_s("%d", &num);

	while (i > 0)
	{
		printf("%dX%d = %d \n", num, i, num*i);
		i--;
	}
	return 0;
}