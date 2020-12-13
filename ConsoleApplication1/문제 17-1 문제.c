#include <stdio.h>
// �� �迭���� �����͸� �̿��Ͽ� ���� ū���� �������� ȣ���ϴ� �Լ��� �����ϴ� �Լ�

void MaxAndMin(int arr[], int **mxPtr, int **mnPtr);

int main(void)
{
	int arr[5];
	printf("���� 5�� �Է�:");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	int *maxPtr; // ū ���� ������
	int *minPtr; // ���� ���� ������
	MaxAndMin(arr, &maxPtr, &minPtr);

	printf("ū��:%d ������:%d \n", *maxPtr, *minPtr); // ��� MaxAndMin �Լ����� 1�� �����ͷ� ������ �ּҰ��� main �Լ������� �����Ե�
	return 0;
}

void MaxAndMin(int arr[], int **mxPtr, int **mnPtr) // ���Լ����� 2�� �����ͷ� ��
{
	int *max, *min; // �� �Լ����� ũ�� �������� �����͸� ��

	max = min = &arr[0];
	for (int i = 0; i < 5; i++) // ũ�� ������ ����
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	*mxPtr = max; // 2�� �����Ϳ� 1�� �������� �ּڰ��� ����
	*mnPtr = min; // ��������
}