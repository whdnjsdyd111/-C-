#include <stdio.h>
// �迭�� �����Ͽ� �� �����͸� �̿��Ͽ� �յڸ� �ٲٴ� �Լ�

int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];

	for (int i = 0; i < 3; i++)
	{
		ptr1 = arr[i];
	    ptr2 = arr[5 - i];
		arr[i] = ptr2;
		arr[5 - i] = ptr1;
	}
	printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	return 0;
}