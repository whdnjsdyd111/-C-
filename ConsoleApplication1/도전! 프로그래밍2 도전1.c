#include <stdio.h>
//길이가 10인 배열에 입력받은 수를 저장하고 홀수와 짝수를 구별하여 출력하는 함수를 만들어 호출하는 프로그램

void OddNumber(int arr[]);
void EvenNumber(int arr[]);

int main()
{
	int arr[10];
	printf("숫자 10개를 입력 \n");

	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	OddNumber(arr);
	EvenNumber(arr);
	return 0;
}

void OddNumber(int arr[])
{
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

void EvenNumber(int arr[])
{
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}