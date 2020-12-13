#include <stdio.h>
//배열 arr을 선언하여 포인터에 저장된 값을 변경하지 않고 주소값을 변경하는 함수

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[0];

	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
	}

	printf("%d %d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
	return 0;
}