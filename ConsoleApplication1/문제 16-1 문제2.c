#include <stdio.h>
// �迭[2][4] �� A�� �迭[4][2] �� B�� �ʱ�ȭ�� �ϴ� �Լ�

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