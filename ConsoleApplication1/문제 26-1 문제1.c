#include <stdio.h>

#define ADD(A, B, C) ((A)+(B)+(C))
#define MULTIPLICATION(A, B, C) ((A)*(B)*(C))
// 세개의 숫자를 받아 덧셈과 뺄셈을 반환하는 매크로 함수를 정의

int main()
{
	int a, b, c;
	printf("세개의 숫자를 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("덧셈 결과: %d \n", ADD(a, b, c));
	printf("곱셈 결과: %d \n", MULTIPLICATION(a, b, c));
	return 0;
}