#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int lotto(int num[5][6])
{
	for (int h = 0; h < 5; h++){
		for (int i = 0; i < 6; i++){ // 6���� ������ �迭�� �����ϱ�

			int number = rand() % 45 + 1; // 1~45 ���� ����
			num[h][i] = number;
		}
	}

	while (1){ // ���� ���ڰ� �ִ��� �Ǻ��ϱ�

		for (int h = 0; h < 5; h++){

			for (int x = 0; x < 6; x++){ // ���� ���
				for (int y = 0; y < 6; y++){ // ÷���� ������ ���ڱ��� ���ϱ�

					if (x == y) // �ڱ� �ڽŰ� ���ϸ� �翬�� ������ ����
						y++;
					if (num[h][x] == num[h][y]){
						num[h][y] = rand() % 45 + 1; // �������� �ִٸ� ������ ���� ����
						x = 0;
						y = 0; // x�� y�� 0���β� �Ͽ� ÷���� �� �ֳĸ� ���� ������ ������ ���� ���ڰ� ���� �� �ֱ� ����
					}
				}
			}
		}
		break; //��� �ٸ� ���ڷμ� �ݺ����� ������ ���ѹݺ��� Ż��
	}

	while (1){ // �迭�� ���ڸ� ���� ������ ����

		for (int h = 0; h < 5; h++){

			for (int i = 0; i < 6; i++){
				for (int j = 0; j < 6; j++){
					if (num[h][i]<num[h][j]){
						int temp = num[h][i];
						num[h][i] = num[h][j];
						num[h][j] = temp;
					}
				}
			}
		}
		break;
	}

	return num[5][6];
}

int main()
{
	srand((unsigned)time(NULL));

	int num[5][6];

	lotto(num);

	for (int h = 0; h < 5; h++){
		for (int i = 0; i < 6; i++)
			printf("%d ", num[h][i]);
		putchar('\n');
		putchar('\n');
	}

	return 0;
}