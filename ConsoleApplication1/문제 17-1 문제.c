#include <stdio.h>
// 한 배열에서 포인터를 이용하여 가장 큰값과 작은값을 호출하는 함수를 선언하는 함수

void MaxAndMin(int arr[], int **mxPtr, int **mnPtr);

int main(void)
{
	int arr[5];
	printf("숫자 5개 입력:");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	int *maxPtr; // 큰 값의 포인터
	int *minPtr; // 작은 값의 포인터
	MaxAndMin(arr, &maxPtr, &minPtr);

	printf("큰값:%d 작은값:%d \n", *maxPtr, *minPtr); // 결과 MaxAndMin 함수에서 1중 포인터로 저장한 주소값이 main 함수에서도 나오게됨
	return 0;
}

void MaxAndMin(int arr[], int **mxPtr, int **mnPtr) // 이함수에는 2중 포인터로 둠
{
	int *max, *min; // 이 함수안의 크고 작은값의 포인터를 둠

	max = min = &arr[0];
	for (int i = 0; i < 5; i++) // 크고 작음을 구별
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	*mxPtr = max; // 2중 포인터에 1중 포인터의 주솟값을 저장
	*mnPtr = min; // 마찬가지
}