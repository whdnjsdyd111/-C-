#include <stdio.h>
// 무조건 0이상이 나오는 두 수의 차이

int main(void)
{
	printf("차이를 구할 두 정수를 입력:");
	int num1, num2, total;
	scanf_s("%d %d", &num1, &num2);
	total = (num1 >= num2) ? (num1-num2) : (num2-num1);

	printf("결과:%d \n", total);
	return 0;

}