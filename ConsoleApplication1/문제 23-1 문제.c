#include <stdio.h>
// 구조체의 두 변수끼리 바꿔주기

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point *pos1, Point *pos2);

int main()
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);

	printf("pos1 [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("pos2 [%d, %d] \n", pos2.xpos, pos2.ypos);

	return 0;
}

void SwapPoint(Point *pos1, Point *pos2) // pos1, pos2 의 주솟값받기
{
	Point temp = *pos1; // temp에 pos1 의 주솟값 저장
	*pos1 = *pos2; // pos1 을 pos2 의 주솟값으로 바꿈
	*pos2 = temp; // pos2 에 pos1의 주솟값을 저장
}