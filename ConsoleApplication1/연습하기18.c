#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	while (1){ // ����ڰ� �Է��ϴ� ���ڰ� Ȧ������ ¦������ �Ǻ��ϱ�
		printf("Ȧ���� �Է�: ");
		scanf("%d", &num);
		if (num % 2 == 0)
			puts("�ٽ� �Է�!! \n");
		if (num % 2 == 1)
			break;
	}
	char arr[100][100]; // 100x100 ������ �迭 ����

	for (int i = 0; i < 100; i++){ // ��� ������ ���� ä���ֱ�
		for (int j = 0; j < 100; j++) // �̰� �����ָ� *�� �ƴ� �迭��Ҵ� �����Ⱚ ���
			arr[i][j] = ' ';
	}

	for (int i = 0; i < num / 2 + 1; i++){ // ����ڰ� �Է��� Ȧ���� ��ƴ + 1 ��ŭ ����
		arr[i][i] = '*'; // ���� �迭�� ���� * �����ϱ�
		arr[i][(num-1) - i] = '*';
		arr[(num-1) - i][i] = '*';
		arr[(num-1) - i][(num-1) - i] = '*';
	}

	for (int i = 0; i < num; i++){ // ����ؼ� �����ֱ�
		for (int j = 0; j < num; j++){
			printf("%c ", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}