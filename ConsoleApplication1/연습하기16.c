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
	puts("-----회사 정보 입력-----");
	for (int i = 0; i < 2; i++){
		printf("회사명: "); scanf("%s", cp[i].companyName);
		printf("종업원: "); scanf("%d", &cp[i].employeeNumber);
		printf("매출액: "), scanf("%d", &cp[i].sales);
		cp[i].profitOnSales = (double)cp[i].sales * 0.25;
		putchar('\n');
	}

	puts("-----회사 정보 출력-----");
	for (int i = 0; i < 2; i++){
		printf("회사명: %s \n", cp[i].companyName);
		printf("종업원: %d \n", cp[i].employeeNumber);
		printf("매출액: %d \n", cp[i].sales);
		printf("매출이익: %.0f \n", cp[i].profitOnSales);
		putchar('\n');
	}
	return 0;
}