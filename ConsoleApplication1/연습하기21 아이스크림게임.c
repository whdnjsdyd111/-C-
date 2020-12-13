#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	srand((unsigned)time(NULL));

	printf("상대할 인원 수: ");
	int io; // 상대할 컴퓨터 수
	scanf("%d", &io);
	getchar();
	io += 1; // 총 플레이어 수
	putchar('\n');

	printf("----- 순서 정하기 ----- \n");
	int order = (rand() % io) + 1; // 플레이어의 순서
	printf("당신의 순서: %d 등! \n\n", order);
	printf("-----     미션     ----- \n");
	int killComputer;
	while (1){
		killComputer = ((rand() % io) + 1);
		if (killComputer != order){
			printf("computer%d를 패배시키세요! \n\n", killComputer);
			break;
		}
	}

	int turn = 1; // 현재 순서
	int TirtyOne = 0; // 숫자

	while (1){
		if (turn == (io + 1)) // 만약 현재 순서가 인원수 만큼 다해서 1이 더 많다면 현 순서를 1로 되돌리기
			turn = 1;

		if (turn != order){ // 현재 순서가 플레이어의 순서가 아니라면 컴퓨터 차례
			if (TirtyOne <= 27){
				int whatNumber = (rand() % 3 + 1);
				printf("computer%d: ", turn);
				for (int i = 0; i < whatNumber; i++){
					TirtyOne += 1;
					printf("%d ", TirtyOne);
					Sleep(150);
				}
			}
			else if (TirtyOne == 28){
				int whatNumber = (rand() % 2 + 1);
				printf("computer%d: ", turn);
				for (int i = 0; i < whatNumber; i++){
					TirtyOne += 1;
					printf("%d ", TirtyOne);
					Sleep(150);
				}
			}
			else if (TirtyOne == 29 || TirtyOne == 30){
				int whatNumber = (rand() % 1 + 1);
				printf("computer%d: ", turn);
				for (int i = 0; i < whatNumber; i++){
					TirtyOne += 1;
					printf("%d ", TirtyOne);
					Sleep(150);
				}
			}
		}

		putchar('\n');

		if (turn == order){
			while (1){
				int whatNumber;
				printf("당신의 차례입니다. \n");
				if (TirtyOne == 30){
					Sleep(500);
					printf("근데...");
					Sleep(750);
					printf("승부가 보이는 군요. \n");
					Sleep(500);
				}
				printf("몇 개의 숫자를 선택할 것입니까?: ");
				scanf("%d", &whatNumber);
				if (whatNumber >= 1 && whatNumber <= 3){
					printf("player:    ");
					for (int i = 0; i < whatNumber; i++){
						TirtyOne += 1;
						printf("%d ", TirtyOne);
						Sleep(150);
					}
					putchar('\n');
					break;
				}
				printf("할 수 있는 숫자 갯수는 3개 까지입니다. \n");
			}
		}

		if (TirtyOne >= 31){
			if (turn == order){
				printf("당신의 패배입니다. \n");
			}
			else {
				printf("computer%d의 패배입니다. \n", turn);
				if (turn == killComputer){
					printf("미션을 성공하셨습니다!! ");
					printf("당신의 승리입니다. \n");
				}
			}
			break;
		}
		turn += 1;
	}

	return 0;
}