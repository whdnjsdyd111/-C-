#include <stdio.h>
// 길이가 4X4 인 배열을 90도 이동시키는 함수 근데 어째서인지 3번째 회전부터는 이상해짐.

void Printf(int str[][4]);
void Nine(int arr[][4], int array[][4]);

int main()
{
	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	}; // 4x4 배열 선언
	Printf(arr); // 배열 출력

	int array[4][4]; // 회전하여 저장할 빈공간의 배열 선언
	int(*str1)[4] = arr; // 배열 포인터 2개를 선언
	int(*str2)[4] = array;

	for (int i = 0; i < 4; i++){
		int arrayReset[4][4]; // 배열 포인터의 공간 비워줄 배열 선언
		Nine(str1, str2);
		str1 = str2; // 배열 포인터를 이용하여 90도 회전한 배열을 저장
		str2 = arrayReset; //공간 비워주기
	}
	return 0;
}

void Printf(int str[][4]) // 배열을 출력하는 함수
{
	for (int m = 0; m < 4; m++){
		for (int n = 0; n < 4; n++){
			printf("%d ", str[m][n]);
		}
		printf("\n");
	}
	printf("\n");
}

void Nine(int arr[][4], int array[][4]) // 배열을 90도 바꾸는 함수
{
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				array[j][3 - i] = arr[i][j];
			}
		}
		Printf(array);
}