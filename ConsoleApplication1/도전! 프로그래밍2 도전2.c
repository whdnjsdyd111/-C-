#include <stdio.h>
// 10������ ���ڸ� �Է� �޾� 2������ ���ڷ� ǥ���ϴ� ���α׷�

int main()
{
	printf("2������ ǥ���ϰ��� �ϴ� 10������ ��: ");
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

	while (arr[len] == 0 || arr[len] == 1) // arr�� int ������ �ι��ڰ� ����. �׷��� 0�� 1�̸� �ݺ��Ͽ� len ����
		len++;

	for (int j = len; j > 0; j--)
	{
		printf("%d ", arr[j - 1]);
	}

	return 0;
}