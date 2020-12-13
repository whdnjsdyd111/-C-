#include <stdio.h>
// ���̰� 4X4 �� �迭�� 90�� �̵���Ű�� �Լ� �ٵ� ��°������ 3��° ȸ�����ʹ� �̻�����.

void Printf(int str[][4]);
void Nine(int arr[][4], int array[][4]);

int main()
{
	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	}; // 4x4 �迭 ����
	Printf(arr); // �迭 ���

	int array[4][4]; // ȸ���Ͽ� ������ ������� �迭 ����
	int(*str1)[4] = arr; // �迭 ������ 2���� ����
	int(*str2)[4] = array;

	for (int i = 0; i < 4; i++){
		int arrayReset[4][4]; // �迭 �������� ���� ����� �迭 ����
		Nine(str1, str2);
		str1 = str2; // �迭 �����͸� �̿��Ͽ� 90�� ȸ���� �迭�� ����
		str2 = arrayReset; //���� ����ֱ�
	}
	return 0;
}

void Printf(int str[][4]) // �迭�� ����ϴ� �Լ�
{
	for (int m = 0; m < 4; m++){
		for (int n = 0; n < 4; n++){
			printf("%d ", str[m][n]);
		}
		printf("\n");
	}
	printf("\n");
}

void Nine(int arr[][4], int array[][4]) // �迭�� 90�� �ٲٴ� �Լ�
{
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				array[j][3 - i] = arr[i][j];
			}
		}
		Printf(array);
}