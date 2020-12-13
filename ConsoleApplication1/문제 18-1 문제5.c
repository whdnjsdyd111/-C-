#include <stdio.h>
/*
    int main()
	{
	    int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
		printf("%d \n", arr[1][0][1]);
		return 0;
	}

	arr[1][0][1] 을 대신할 수 있는 문장 5개 이상 제시
*/

int main()
{
	int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	printf("%d \n", arr[1][0][1]);
	printf("%d \n", (*(arr + 1))[0][1]);
	printf("%d \n", (*(*(arr + 1) + 0))[1]);
	printf("%d \n", *(arr[1][0]) + 1);
	printf("%d \n", (*arr[1][0]) + 1);
	printf("%d \n", *(*(*(arr+1)+0)+1));
	return 0;
}