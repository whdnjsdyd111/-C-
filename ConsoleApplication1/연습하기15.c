#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// �ִ밪�� �ּڰ��� �޾� �� ������ ������ ����ϰ� ESC Ű�� �Է� ������ ���߱�

#define ESC 0x1B // Ű ESC �� ���� 0x1B ��� ��

int main()
{
	int min, max;
	char ch = 0;
	printf("�ּڰ�: ");
	scanf("%d", &min);
	printf("�ִ�: ");
	scanf("%d", &max);

#define True(number, min, max) ((number>=min && number<=max) ? 1 : 0)

	do{
		int number = rand();
		int fact = True(number, min, max);
		if (fact == 1)
			printf("%d ", number);

		if (_kbhit())
			ch = _getch();
	} while (ch != ESC);

	return 0;
}