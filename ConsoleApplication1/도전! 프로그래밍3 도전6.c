#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ���� �߱�

int main()
{
	int user[3];
	int computer[3];
	srand((int)time(NULL));
	printf("Start Game!!! \n\n");

	for (int i = 0; i >= 0; i++){ // 3��Ʈ����ũ�� �� ������ �ؾ��ϹǷ� ����
		printf("���� 3���� ����: ");
		int strike = 0, ball = 0; // ��Ʈ����ũ�� ���� 0���� �ʱ�ȭ

		for (int a = 0; a < 3; a++)
			scanf_s("%d", &user[a]); // ������ �Է��� 3���� ����
		for (int b = 0; b < 3; b++)
			computer[b] = rand() % 10; // ��ǻ�Ͱ� ������ 3���� ����

		for (int z = 0; z < 3; z++){ // ��ġ�� ���ڰ� ������ ��Ʈ����ũ + 1 ���ֱ�
			if (user[z] == computer[z])
				strike += 1;
		}

		for (int x = 0; x < 3; x++){
			for (int y = 0; y < 3; y++){
				if (user[x] == computer[y]){ // ���ڸ� ������ �� + 1 ���ֱ�
					ball += 1;
					if (x == y) // ������ ��ġ���� ������ ��Ʈ����ũ�̹Ƿ� �������ֱ�
						ball -= 1;
				}
			}
		}
		printf("%d��° ���� ���: %dstrike, %dball !! \n\n", i + 1 , strike, ball);
		if (strike == 3){
			printf("Game Over! \n"); // ���� 3��Ʈ����ũ�� ������
			break;
		}
	}
	return 0;
}