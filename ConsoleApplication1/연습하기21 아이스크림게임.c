#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	srand((unsigned)time(NULL));

	printf("����� �ο� ��: ");
	int io; // ����� ��ǻ�� ��
	scanf("%d", &io);
	getchar();
	io += 1; // �� �÷��̾� ��
	putchar('\n');

	printf("----- ���� ���ϱ� ----- \n");
	int order = (rand() % io) + 1; // �÷��̾��� ����
	printf("����� ����: %d ��! \n\n", order);
	printf("-----     �̼�     ----- \n");
	int killComputer;
	while (1){
		killComputer = ((rand() % io) + 1);
		if (killComputer != order){
			printf("computer%d�� �й��Ű����! \n\n", killComputer);
			break;
		}
	}

	int turn = 1; // ���� ����
	int TirtyOne = 0; // ����

	while (1){
		if (turn == (io + 1)) // ���� ���� ������ �ο��� ��ŭ ���ؼ� 1�� �� ���ٸ� �� ������ 1�� �ǵ�����
			turn = 1;

		if (turn != order){ // ���� ������ �÷��̾��� ������ �ƴ϶�� ��ǻ�� ����
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
				printf("����� �����Դϴ�. \n");
				if (TirtyOne == 30){
					Sleep(500);
					printf("�ٵ�...");
					Sleep(750);
					printf("�ºΰ� ���̴� ����. \n");
					Sleep(500);
				}
				printf("�� ���� ���ڸ� ������ ���Դϱ�?: ");
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
				printf("�� �� �ִ� ���� ������ 3�� �����Դϴ�. \n");
			}
		}

		if (TirtyOne >= 31){
			if (turn == order){
				printf("����� �й��Դϴ�. \n");
			}
			else {
				printf("computer%d�� �й��Դϴ�. \n", turn);
				if (turn == killComputer){
					printf("�̼��� �����ϼ̽��ϴ�!! ");
					printf("����� �¸��Դϴ�. \n");
				}
			}
			break;
		}
		turn += 1;
	}

	return 0;
}