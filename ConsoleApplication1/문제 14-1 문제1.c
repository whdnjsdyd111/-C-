#include <stdio.h>
// Call-By-Value 기반의 제곱함수와 Call-By-Reference 기반의 제곱함수를 출력

int SquareByValue(int num)
{
	return num*num;
}

int SquareByReference(int *ptr)
{
	int num = *ptr;
	*ptr = num*num;
}

int main()
{
	printf("숫자 입력:");
	int num;
	scanf_s("%d", &num);

	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}