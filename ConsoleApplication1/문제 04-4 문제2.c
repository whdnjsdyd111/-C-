#include <stdio.h>
//������ �޾� ��Ģ������ �̿����� �ʰ� ������ ����ϴ� �Լ�

int main(void)
{
	int num;
	printf("������ �Է�:");
	scanf_s("%d", &num);
	printf("���:%d \n", (num << 3) >> 2);
	return 0;
}