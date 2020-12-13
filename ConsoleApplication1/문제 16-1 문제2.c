#include <stdio.h>
// 배열[2][4] 인 A를 배열[4][2] 인 B로 초기화를 하는 함수

int main()
{
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	int B[4][2];

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 4; j++){
			B[j][i] = A[i][j];
		}
	}

	for (int m = 0; m < 4; m++){
		for (int n = 0; n < 2; n++){
			printf("%d ", B[m][n]);
		}
		printf("\n");
	}
	return 0;
}