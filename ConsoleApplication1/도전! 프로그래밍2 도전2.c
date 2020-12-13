#include <stdio.h>
// 10진수의 숫자를 입력 받아 2진수의 숫자로 표현하는 프로그램

int main()
{
	printf("2진수로 표현하고자 하는 10진수의 수: ");
	int num;
	scanf_s("%d", &num);

	int arr[100];
	int len = 0;

	for (int i = 0; i < 100; i++){
		if (num == 0)
			break;
		if (num % 2 != 0)
			arr[i] = 1;
		if (num % 2 == 0)
			arr[i] = 0;

		num /= 2;
	}

	while (arr[len] == 0 || arr[len] == 1) // arr은 int 형으로 널문자가 없음. 그래서 0과 1이면 반복하여 len 증가
		len++;

	for (int j = len; j > 0; j--)
	{
		printf("%d ", arr[j - 1]);
	}

	return 0;
}