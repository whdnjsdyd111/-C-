#include <stdio.h>
// �迭 arr�� �����Ͽ� �����Ϳ� ����� ���� ���ϴ� �Լ�

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[0];

	for (int i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
}