#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �� ��ǥ�� �޾� ���簢���� ���̿� �� ���� ��ǥ�� ����ϴ� �Լ�

typedef struct point
{
	int xpos; // x��ǥ
	int ypos; // y��ǥ
} Point;

typedef struct rectangle
{
	Point ru; // ���� ��ǥ
	Point ld; // ���ϴ� ��ǥ
} Rectangle;

void Area(Rectangle *ptr)
{
	int area = (ptr->ru.xpos - ptr->ld.xpos)*(ptr->ru.ypos - ptr->ld.ypos); // ���簢�� ���� ���ϱ�
	printf("\n����: %d \n\n", area);
}

void FourPoint(Rectangle *ptr) // �� ���� ��ǥ ����ϴ� �Լ�
{
	printf("�� ���� ��ǥ \n\n");

	printf("���ϴ��� ��ǥ: %d %d \n", ptr->ld.xpos, ptr->ld.ypos);
	printf("�»���� ��ǥ: %d %d \n", ptr->ld.xpos, ptr->ru.ypos);
	printf("������ ��ǥ: %d %d \n", ptr->ru.xpos, ptr->ru.ypos);
	printf("���ϴ��� ��ǥ: %d %d \n\n", ptr->ru.xpos, ptr->ld.ypos);
}

Rectangle ReceivePoint(void) // ��ǥ �޴� �Լ�
{
	Rectangle ptr;
	printf("�� ���� ��ǥ�� �Է� �Ͻÿ�. \n\n");
	printf("������ ��ǥ \n");
	scanf("%d %d", &ptr.ru.xpos, &ptr.ru.ypos);
	printf("���ϴ��� ��ǥ \n");
	scanf("%d %d", &ptr.ld.xpos, &ptr.ld.ypos);
	return ptr;

}

int main()
{
	Rectangle ptr = ReceivePoint();
	Area(&ptr);
	FourPoint(&ptr);

	return 0;
}