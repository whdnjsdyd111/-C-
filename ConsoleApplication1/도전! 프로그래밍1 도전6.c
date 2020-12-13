#include <stdio.h>
//초를 입력받아 시, 분, 초 형태로 출력

int main(void)
{
	printf("초 입력:");
	int num;
	scanf_s("%d", &num);
	int h = num / 3600;
	int m = (num - 3600 * h) / 60;
	int s = (num - 3600 * h - m * 60);
	printf("h:%d, m:%d, s:%d \n", h, m, s);
	return 0;
}