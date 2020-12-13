#include <stdio.h>
//두 포인터에 저장된 변수끼리 바꾸는 함수

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1, *ptr2 = &num2;
	(*ptr1) += 10, (*ptr2) -= 10;

	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1=%d \nptr2=%d \n", *ptr1, *ptr2);
	return 0;
}