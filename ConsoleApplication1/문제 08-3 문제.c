#include <stdio.h>
// switch �Լ��� ��Ÿ���� �ָ��� ��Ȳ �غ��ϴ� �Լ�

int main(void)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	int n = num / 10;

	switch (n)
	{
	case 0:
		printf("0�̻� 10�̸� \n");
		break;
	case 1:
		printf("10�̻� 20�̸� \n");
		break;
	case 2:
		printf("20�̻� 10�̸� \n");
		break;
	default:
		printf("30�̻� \n");
		break;
	}
	return 0;
}