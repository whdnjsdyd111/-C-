#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// �ΰ��� �ֻ����� �������� �����ϰ� ����� ������ �Լ�

int main()
{
	int num1, num2;
	srand((int)time(NULL));

	printf("�ֻ��� 1�� ���: %d \n", rand() % 6 + 1); // 1~6 ������ �������� ��������
	printf("�ֻ��� 2�� ���: %d \n", rand() % 6 + 1);

	return 0;
}