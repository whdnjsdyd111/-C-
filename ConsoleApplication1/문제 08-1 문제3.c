#include <stdio.h>
//�� ������ ������ ����� ������ ����ϴ� �Լ�

int main(void)
{
	int Math, English,	Language;
	printf("����� �� ������ �Է� �Ͻÿ�. \n");
	printf("����:"); scanf_s("%d", &Math);
	printf("����:"); scanf_s("%d", &English);
	printf("����:"); scanf_s("%d", &Language);

	int total = (Math + English + Language) / 3;
	printf("����� ����:%d ��� ", total);
	if (total > 90)
		printf("A \n");
	else if (total > 80)
		printf("B \n");
	else if (total > 70)
		printf("C \n");
	else if (total > 50)
		printf("D \n");
	else if (total <= 50)
		printf("F \n");
	return 0;
}