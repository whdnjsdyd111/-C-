#include <stdio.h>
//������ ��� �ް� 0�� �Ǹ� ���߰� ���� �������� ���� ���ϴ� �Լ�

int main(void)
{
	int num, result=0;
	printf("���� ������ ��� �Է��Ͻÿ�. 0�̵Ǹ� ���� ���߰� ������ ��.\n");

	while (num == 0)
	{
		scanf_s("%d", &num);
		result += num;
	}
	printf("�� �� %d", result);
	return 0;
}