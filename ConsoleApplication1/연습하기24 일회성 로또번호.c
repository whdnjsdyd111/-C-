#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int lotto(int num[5][6])
{
	for (int h = 0; h < 5; h++){
		for (int i = 0; i < 6; i++){ // 6개의 난수를 배열에 저장하기

			int number = rand() % 45 + 1; // 1~45 중의 숫자
			num[h][i] = number;
		}
	}

	while (1){ // 같은 숫자가 있는지 판별하기

		for (int h = 0; h < 5; h++){

			for (int x = 0; x < 6; x++){ // 비교할 대상
				for (int y = 0; y < 6; y++){ // 첨부터 마지막 숫자까지 비교하기

					if (x == y) // 자기 자신과 비교하면 당연히 같으니 제외
						y++;
					if (num[h][x] == num[h][y]){
						num[h][y] = rand() % 45 + 1; // 같은것이 있다면 새로이 난수 지정
						x = 0;
						y = 0; // x와 y를 0으로끔 하여 첨부터 비교 왜냐면 새로 지정한 난수와 같은 숫자가 있을 수 있기 때문
					}
				}
			}
		}
		break; //모두 다른 숫자로서 반복문을 나오면 무한반복문 탈출
	}

	while (1){ // 배열의 숫자를 작은 수부터 나열

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