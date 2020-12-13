#include <stdio.h>
// 2차원 배열로 구구단을 출력

int main()
{
	int arr[3][9];

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 9; j++){
			arr[i][j] = (i + 2)*(j + 1);
		}
	}

	for (int m = 0; m < 3; m++){
		for (int n = 0; n < 9; n++){
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}
	return 0;
}