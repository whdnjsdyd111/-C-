#include <stdio.h>

#define ADD(A, B, C) ((A)+(B)+(C))
#define MULTIPLICATION(A, B, C) ((A)*(B)*(C))
// ������ ���ڸ� �޾� ������ ������ ��ȯ�ϴ� ��ũ�� �Լ��� ����

int main()
{
	int a, b, c;
	printf("������ ���ڸ� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("���� ���: %d \n", ADD(a, b, c));
	printf("���� ���: %d \n", MULTIPLICATION(a, b, c));
	return 0;
}