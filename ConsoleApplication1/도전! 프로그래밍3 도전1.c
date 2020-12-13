#include <stdio.h>
// 4x4 2차배열 { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } 을 90도 회전하는 함수

void Rotation(int arr1[][4], int arr2[][4]); // 90도 회전 시키는 배열
void Print(arr); // 배열을 출력하는 함수

int main()
{
	int arr1[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int arr2[4][4], arr3[4][4], arr4[4][4], arr5[4][4]; // str2를 초기화 해줄 빈공간의 배열들
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

void Rotation(int arr1[][4], int arr2[][4]) // 90도 회전시키는 배열
{
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			arr2[j][3 - i] = arr1[i][j];
	}
}

void Print(int arr[][4]) // 배열을 출력하는 함수
{
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}