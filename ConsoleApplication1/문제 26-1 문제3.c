#include <stdio.h>

#define MAX(A, B) ((A)>(B))
// �� ���� ũ�⸦ ���� ū ���� ��ȯ�ϴ� ��ũ���Լ� MAX ����

int main()
{
	int num1, num2, max;
	printf("�� ���� ���ڸ� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

#if MAX(num1, num2)
	max = num1;
#else
	max = num2;
#endif
	printf("ū ��: %d \n", max);
	return 0;
}