#include <stdio.h>
// 달팽이 배열을 출력 (배열에 수를 시계방향으로 저장)

void Snail(int str[][100], int n);
int num = 1;

int main()
{
	printf("숫자를 입력: ");
	int n, x;
	scanf_s("%d", &n);
	printf("\n");

	int arr[100][100];
	
	if (n % 2 == 0) // 만약 짝수라면 실행하는 횟수가 n의 반틈
		x = n / 2;
	if (n % 2 == 1) // 그리고 홀수라면 실행하는 횟수가 n의 반틈 + 1 임
		x = n / 2 + 1;

	for (int i = 0; i < x; i++){ // 위의 if문으로 받은 x만큼 실행
		Snail(arr, n, i);
	}
	
	for (int j = 0; j < n; j++){ // 배열을 출력
		for (int z = 0; z < n; z++){
			printf("%2d ", arr[j][z]);
		}
		printf("\n");
	}
	return 0;
}

void Snail(int str[][100], int n, int i)
{
	for (int a = 0; a < n - 2 * i; a++){ //첫 -> 가로줄 실행
		str[i][i + a] = num, num += 1;

	}
	for (int b = 0; b < (n - 2 * i) - 1; b++){ // 두번째 v 세로줄 실행
		str[1 + i + b][(n - 1) - i] = num, num += 1;

	}
	for (int c = 0; c < (n - 2 * i) - 1; c++){ // 세번째 <- 가로줄 실행
		str[(n - 1) - i][(n - 2) - i - c] = num, num += 1;

	}
	for (int d = 0; d < (n - 2 * i) - 2; d++){ // 마지막 ^ 세로줄 실행
		str[(n - 2) - i - d][i] = num, num += 1;

	}
}