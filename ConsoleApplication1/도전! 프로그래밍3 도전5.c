#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ���������� ���� ����� �� ����ڰ� �� ������ ��ӵǰ� �������� ������

int main()
{
	srand((int)time(NULL));

	int win = 0;
	int drow = 0;// �̱� Ƚ���� ��� Ƚ���� ����

	for (int i = 0; i >= 0; i++){ // �� ������ �ϹǷ� ������

		printf("������ 1, ������ 2, ���� 3 \n");
		printf("����� �� ����? ");

		int Case1; // ����ڰ� �� ����� ��
		scanf_s("%d", &Case1);

		int Case2 = rand() % 3 + 1; //��ǻ�Ͱ� �� ����� ��

		if (Case1 == 1){
			printf("����� [����] ����, ");

			if (Case2 == 1){
				printf("��ǻ�ʹ� [����] ����, �����ϴ�! \n");
				drow += 1;
			}
			if (Case2 == 2){
				printf("��ǻ�ʹ� [����] ����, �̰���ϴ�! \n");
				win += 1;
			}
			if (Case2 == 3){
				printf("��ǻ�ʹ� [��] ����, �����ϴ�! \n");
				break;
			}
		}

		if (Case1 == 2){
			printf("����� [����] ����, ");

			if (Case2 == 1){
				printf("��ǻ�ʹ� [����] ����, �����ϴ�! \n");
				break;
			}
			if (Case2 == 2){
				printf("��ǻ�ʹ� [����] ����, �����ϴ�! \n");
				drow += 1;
			}
			if (Case2 == 3){
				printf("��ǻ�ʹ� [��] ����, �̰���ϴ�! \n");
				win += 1;
			}
		}

		if (Case1 == 3){
			printf("����� [��] ����, ");

			if (Case2 == 1){
				printf("��ǻ�ʹ� [����] ����, �̰���ϴ�! \n");
				win += 1;
			}
			if (Case2 == 2){
				printf("��ǻ�ʹ� [����] ����, �����ϴ�! \n");
				break;
			}
			if (Case2 == 3){
				printf("��ǻ�ʹ� [��] ����, �����ϴ�! \n");
				drow += 1;
			}
		}
	}

	printf("������ ���: %d�� %d�� \n", win, drow);
	return 0;
}