#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand((unsigned)time(NULL)); // �õ尪

	int computerNumber = (rand() % 100) + 1; // 1~100������ ���� ����
	int userNumber; // ����� ����
	int number = 0; // Ƚ��

	while (1){ // ���� �ݺ�
		printf("���� �Է�: ");
		scanf("%d", &userNumber);

		number++;

		if (userNumber < computerNumber) // ��ǻ�Ͱ� �� Ŭ ��
			puts("��ǻ���� ���ڰ� �� Ů�ϴ�!! \n");
		if (userNumber > computerNumber) // ��ǻ�Ͱ� �� ���� ��
			puts("��ǻ���� ���ڰ� �� �۽��ϴ�!! \n");
		if (userNumber == computerNumber){
			puts("�����Դϴ�!!");
			break;
		}
	}

	printf("%dȸ ���� �̰���ϴ�!! \n", number);
	return 0;
}