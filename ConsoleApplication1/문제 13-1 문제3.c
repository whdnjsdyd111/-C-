#include <stdio.h>
// 배열 마지막 요소를 포인터로 선언하여 포인터에 저장된 값을 감소시키고 모든 값을 더하는 함수

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[4];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		total += *ptr;
		*ptr--;
	}
	printf("결과:%d \n", total);
	return 0;
}