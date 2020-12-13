#include <stdio.h>
// 좌상단과 우상단의 좌표를 받아 직사각형 넓이를 구하는 함수

int main(void)
{
	int x1, y1, x2, y2;
	printf("좌 상단의 좌표 (x1, y1) ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 하단의 좌표 (x2, y2) ");
	scanf_s("%d %d", &x2, &y2);

	printf("두 좌표가 이루는 직사각형 넓이 = %d \n", (x2 - x1)*(y1 - y2));
	return 0;

}