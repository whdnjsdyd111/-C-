#include <stdio.h>
// ���̰� 5�� �迭�� �Է� �޾� ���� �� �ִ�, �ּڰ�, �� ���� ���ϴ� �Լ�

int main(void)
{
	printf("���̰� 5�� �迭�� �Է�: ");
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
	printf("�ִ�:%d \n�ּڰ�:%d \n�� ��:%d \n", big, small, total);
	return 0;
}