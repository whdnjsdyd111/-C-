#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// 최대값과 최솟값을 받아 그 사이의 난수만 출력하고 ESC 키를 입력 받으면 멈추기

#define ESC 0x1B // 키 ESC 의 값은 0x1B 라고 함

int main()
{
	int min, max;
	char ch = 0;
	printf("최솟값: ");
	scanf("%d", &min);
	printf("최댓값: ");
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