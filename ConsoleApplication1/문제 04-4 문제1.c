#include <stdio.h>
//-1�� �Է��ϸ� 1, 2�� �ԷµǸ� -2�� ��µǴ� �Լ�

int main(void)
{
	int num;
	printf("�ݴ��� ��ȣ�� ���� ����:");
	scanf_s("%d", &num);
	printf("���:%d \n", ~num + 1);
	return 0;
}