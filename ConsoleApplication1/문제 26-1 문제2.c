#include <stdio.h>

#define PI 3.14
#define AREA(A) ((A)*(A)*PI)
// ������ PI�� ���� ���� AREA�� ��ũ�� ����� �����ϱ�

int main()
{
	double rad;
	printf("���� ������: ");
	scanf_s("%lf", &rad);

	printf("���� ����: %.2f \n", AREA(rad));
	return 0;
}