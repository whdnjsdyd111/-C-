#include <stdio.h>
//�迭 arr�� �����Ͽ� �����Ϳ� ����� ���� �������� �ʰ� �ּҰ��� �����ϴ� �Լ�

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[0];

	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
	}

	printf("%d %d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
	return 0;
}