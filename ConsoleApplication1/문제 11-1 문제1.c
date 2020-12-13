#include <stdio.h>
// 길이가 5인 배열을 입력 받아 정수 중 최댓값, 최솟값, 총 합을 구하는 함수

int main(void)
{
	printf("길이가 5인 배열을 입력: ");
	int arr[5];
	for (int l = 0; l < 5; l++)
	{
		scanf_s("%d", &arr[l]);
	}
	int big, small, total;
	big = small = arr[0];
	total = 0;

	for (int i = 0; i < 5; i++)
	{
		total += arr[i];
		if (big <= arr[i])
			big = arr[i];
		if (small >= arr[i])
			small = arr[i];
	}
	printf("최댓값:%d \n최솟값:%d \n총 합:%d \n", big, small, total);
	return 0;
}