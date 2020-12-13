#include <stdio.h>
//결과 예상하기. (포인터에 관한 이해)

int main()
{
	int num = 10;
	int *ptr1 = &num;
	int *ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}