#include <stdio.h>
// 4x4 2���迭 { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } �� 90�� ȸ���ϴ� �Լ�

void Rotation(int arr1[][4], int arr2[][4]); // 90�� ȸ�� ��Ű�� �迭
void Print(arr); // �迭�� ����ϴ� �Լ�

int main()
{
	int arr1[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int arr2[4][4], arr3[4][4], arr4[4][4], arr5[4][4]; // str2�� �ʱ�ȭ ���� ������� �迭��
	int(*str1)[4] = arr1;
	int(*str2)[4] = arr2;
	Print(arr1);
	
	Rotation(str1, str2);
	Print(str2);
	str1 = str2;
	str2 = arr3;

	Rotation(str1, str2);
	Print(str2);
	str1 = str2;
	str2 = arr4;

	Rotation(str1, str2);
	Print(str2);
	str1 = str2;
	str2 = arr5;

	Rotation(str1, str2);
	Print(str2);

	return 0;
}

void Rotation(int arr1[][4], int arr2[][4]) // 90�� ȸ����Ű�� �迭
{
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			arr2[j][3 - i] = arr1[i][j];
	}
}

void Print(int arr[][4]) // �迭�� ����ϴ� �Լ�
{
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}