#include <stdio.h>
/*
    void SimpleFuncOne(???, ???){...}
	void SimpleFuncTwo(???, ???){,,,}
	int main()
	{
	    int arr1[3];
		int arr2[4];
		int arr3[3][4];
		int arr4[2][4];

		SimepleFuncOne(arr1, arr2);
		SimepleFuncTwo(arr3, arr4);
		...
	}

	???를 대신할 수 있는 매개변수 선언
*/

void SimepleFuncOne(int *ptr1, int *ptr2)
{

}

void SimepleFuncTwo(int (*ptr3)[4], int (*ptr4)[4])
{

}

int main()
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimepleFuncOne(arr1, arr2);
	SimepleFuncTwo(arr3, arr4);
	return 0;
}