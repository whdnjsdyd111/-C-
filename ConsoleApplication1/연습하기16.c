#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct company
{
	char companyName[20];
	int employeeNumber;
	int sales;
	double profitOnSales;
} Company;

int main()
{
	Company cp[2];
	puts("-----ȸ�� ���� �Է�-----");
	for (int i = 0; i < 2; i++){
		printf("ȸ���: "); scanf("%s", cp[i].companyName);
		printf("������: "); scanf("%d", &cp[i].employeeNumber);
		printf("�����: "), scanf("%d", &cp[i].sales);
		cp[i].profitOnSales = (double)cp[i].sales * 0.25;
		putchar('\n');
	}

	puts("-----ȸ�� ���� ���-----");
	for (int i = 0; i < 2; i++){
		printf("ȸ���: %s \n", cp[i].companyName);
		printf("������: %d \n", cp[i].employeeNumber);
		printf("�����: %d \n", cp[i].sales);
		printf("��������: %.0f \n", cp[i].profitOnSales);
		putchar('\n');
	}
	return 0;
}