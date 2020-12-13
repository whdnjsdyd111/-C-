#include <stdio.h>
// ����ü�� �� �������� �ٲ��ֱ�

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

void SwapPoint(Point *pos1, Point *pos2) // pos1, pos2 �� �ּڰ��ޱ�
{
	Point temp = *pos1; // temp�� pos1 �� �ּڰ� ����
	*pos1 = *pos2; // pos1 �� pos2 �� �ּڰ����� �ٲ�
	*pos2 = temp; // pos2 �� pos1�� �ּڰ��� ����
}