#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 가위바위보 게임 만들기 단 사용자가 질 때까지 계속되고 마지막에 결과출력

int main()
{
	srand((int)time(NULL));

	int win = 0;
	int drow = 0;// 이긴 횟수와 비긴 횟수의 변수

	for (int i = 0; i >= 0; i++){ // 질 때까지 하므로 무한히

		printf("바위는 1, 가위는 2, 보는 3 \n");
		printf("당신이 낼 것은? ");

		int Case1; // 사용자가 낸 경우의 수
		scanf_s("%d", &Case1);

		int Case2 = rand() % 3 + 1; //컴퓨터가 낸 경우의 수

		if (Case1 == 1){
			printf("당신은 [바위] 선택, ");

			if (Case2 == 1){
				printf("컴퓨터는 [바위] 선택, 비겼습니다! \n");
				drow += 1;
			}
			if (Case2 == 2){
				printf("컴퓨터는 [가위] 선택, 이겼습니다! \n");
				win += 1;
			}
			if (Case2 == 3){
				printf("컴퓨터는 [보] 선택, 졌습니다! \n");
				break;
			}
		}

		if (Case1 == 2){
			printf("당신은 [가위] 선택, ");

			if (Case2 == 1){
				printf("컴퓨터는 [바위] 선택, 졌습니다! \n");
				break;
			}
			if (Case2 == 2){
				printf("컴퓨터는 [가위] 선택, 비겼습니다! \n");
				drow += 1;
			}
			if (Case2 == 3){
				printf("컴퓨터는 [보] 선택, 이겼습니다! \n");
				win += 1;
			}
		}

		if (Case1 == 3){
			printf("당신은 [보] 선택, ");

			if (Case2 == 1){
				printf("컴퓨터는 [바위] 선택, 이겼습니다! \n");
				win += 1;
			}
			if (Case2 == 2){
				printf("컴퓨터는 [가위] 선택, 졌습니다! \n");
				break;
			}
			if (Case2 == 3){
				printf("컴퓨터는 [보] 선택, 비겼습니다! \n");
				drow += 1;
			}
		}
	}

	printf("게임의 결과: %d승 %d무 \n", win, drow);
	return 0;
}