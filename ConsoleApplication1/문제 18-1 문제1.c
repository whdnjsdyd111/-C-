#include <stdio.h>
/*
    int *arr1[5];
	int *arr2[3][5];

	??? = arr1;
	??? = arr2;

	???�� ����� �� �ִ� ������ ������ ����
*/

int main()
{
	int *arr[5];
	int *arr2[3][5];

	int *(*ptr1) = arr;
	int *(*ptr2)[5] = arr2;
	return 0;
}