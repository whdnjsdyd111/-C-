#include <stdio.h>
// ������ �迭�� ��� (�迭�� ���� �ð�������� ����)

void Snail(int str[][100], int n);
int num = 1;

int main()
{
	printf("���ڸ� �Է�: ");
	int n, x;
	scanf_s("%d", &n);
	printf("\n");

	int arr[100][100];
	
	if (n % 2 == 0) // ���� ¦����� �����ϴ� Ƚ���� n�� ��ƴ
		x = n / 2;
	if (n % 2 == 1) // �׸��� Ȧ����� �����ϴ� Ƚ���� n�� ��ƴ + 1 ��
		x = n / 2 + 1;

	for (int i = 0; i < x; i++){ // ���� if������ ���� x��ŭ ����
		Snail(arr, n, i);
	}
	
	for (int j = 0; j < n; j++){ // �迭�� ���
		for (int z = 0; z < n; z++){
			printf("%2d ", arr[j][z]);
		}
		printf("\n");
	}
	return 0;
}

void Snail(int str[][100], int n, int i)
{
	for (int a = 0; a < n - 2 * i; a++){ //ù -> ������ ����
		str[i][i + a] = num, num += 1;

	}
	for (int b = 0; b < (n - 2 * i) - 1; b++){ // �ι�° v ������ ����
		str[1 + i + b][(n - 1) - i] = num, num += 1;

	}
	for (int c = 0; c < (n - 2 * i) - 1; c++){ // ����° <- ������ ����
		str[(n - 1) - i][(n - 2) - i - c] = num, num += 1;

	}
	for (int d = 0; d < (n - 2 * i) - 2; d++){ // ������ ^ ������ ����
		str[(n - 2) - i - d][i] = num, num += 1;

	}
}