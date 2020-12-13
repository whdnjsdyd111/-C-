#include <stdio.h>

#define MAX(A, B) ((A)>(B))
// 두 값의 크기를 비교해 큰 값을 반환하는 매크로함수 MAX 정의

int main()
{
	int num1, num2, max;
	printf("두 개의 숫자를 입력: ");
	scanf_s("%d %d", &num1, &num2);

#if MAX(num1, num2)
	max = num1;
#else
	max = num2;
#endif
	printf("큰 값: %d \n", max);
	return 0;
}