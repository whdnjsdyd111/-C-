#include <stdio.h>
// �»�ܰ� ������ ��ǥ�� �޾� ���簢�� ���̸� ���ϴ� �Լ�

int main(void)
{
	int x1, y1, x2, y2;
	printf("�� ����� ��ǥ (x1, y1) ");
	scanf_s("%d %d", &x1, &y1);
	printf("�� �ϴ��� ��ǥ (x2, y2) ");
	scanf_s("%d %d", &x2, &y2);

	printf("�� ��ǥ�� �̷�� ���簢�� ���� = %d \n", (x2 - x1)*(y1 - y2));
	return 0;

}