#include <stdio.h>
//�ϳ��� ������ �޾� �� ����ŭ 3�� ��� �����ܽ����ϴ� �Լ�

int main(void)
{
	int num, i=1;
	printf("3�� ��� ������ ���� �����Է�:");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d\n", i * 3);
		i++;
	}

	return 0;
}