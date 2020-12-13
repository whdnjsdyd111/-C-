#include <stdio.h>
// 네 사람의 과목을 입력받아 총점과 과목별 총점을 출력하라.

int main()
{
	int arr[5][5];
	printf("국어, 영어, 수학, 국사 순으로 점수를 입력하라. \n");

	for (int i = 0; i < 4; i++){
		switch (i){
		case 0:
			printf("철희: ");
			break;
		case 1:
			printf("철수: ");
			break;
		case 2:
			printf("영희: ");
			break;
		case 3:
			printf("영수: ");
			break;
		}

		for (int j = 0; j < 4; j++){
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	for (int m = 0; m < 4; m++){
		int total = 0;

		for (int n = 0; n < 4; n++){
			total += arr[m][n];
		}
		arr[m][4] = total;
		sum += total;
	}

	for (int x = 0; x < 4; x++){
		int total = 0;

		for (int y = 0; y < 4; y++){
			total += arr[y][x];
		}
		arr[4][x] = total;
		sum += total;
	}

	arr[4][4] = sum;

	for (int a = 0; a < 5; a++){
		switch (a){
		case 0:
			printf("         철희 ");
			break;
		case 1:
			printf("         철수 ");
			break;
		case 2:
			printf("         영희 ");
			break;
		case 3:
			printf("         영수 ");
			break;
		case 4:
			printf("  과목별 총합 ");
			break;
		}
		for (int b = 0; b < 5; b++){
			printf("%d ", arr[a][b]);
		}
		printf("\n");
	}

	return 0;
}