#include <stdio.h>
//���̰� 10�� �迭�� �Է¹��� ���� �����ϰ� Ȧ���� ¦���� �����Ͽ� ����ϴ� �Լ��� ����� ȣ���ϴ� ���α׷�

void OddNumber(int arr[]);
void EvenNumber(int arr[]);

int main()
{
	int arr[10];
	printf("���� 10���� �Է� \n");

	for (int i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);
	}

	OddNumber(arr);
	EvenNumber(arr);
	return 0;
}

void OddNumber(int arr[])
{
	printf("Ȧ�� ���: ");
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
	printf("¦�� ���: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}