#include <stdio.h>
/*
    int *arr1[5];
	int *arr2[3][5];

	??? = arr1;
	??? = arr2;

	???를 대신할 수 있는 포인터 변수를 선언
*/

int main()
{
	int *arr[5];
	int *arr2[3][5];

	int *(*ptr1) = arr;
	int *(*ptr2)[5] = arr2;
	return 0;
}