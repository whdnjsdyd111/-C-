#include <stdio.h>
//�ʸ� �Է¹޾� ��, ��, �� ���·� ���

int main(void)
{
	printf("�� �Է�:");
	int num;
	scanf_s("%d", &num);
	int h = num / 3600;
	int m = (num - 3600 * h) / 60;
	int s = (num - 3600 * h - m * 60);
	printf("h:%d, m:%d, s:%d \n", h, m, s);
	return 0;
}