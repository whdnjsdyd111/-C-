#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 사용자로부터 원소번호를 입력 받아 원자번호, 기호, 이름, 원자량 출력
typedef struct atom
{
	int atomicNumber;
	char atomicSymbol[20];
	char atomname[20];
	double atomicWeight;
} Atom;

int main()
{
	/* 원소 주기율표 정보 입력 */

	Atom atom[102] = { { 1, "H", "Hydrogen", 1.0079 },
	{ 2, "He", "Helium", 4.0026 },
	{ 3, "Li", "Lithium", 6.9410 }, };



	/* 원소 주기율표 정보 입력 */

	int n;
	printf("원자 번호를 입력: ");
	scanf("%d", &n);

	printf("원소번호: %d \n", atom[n - 1].atomicNumber);
	printf("원소기호: %s \n", atom[n - 1].atomicSymbol);
	printf("원소이름: %s \n", atom[n - 1].atomname);
	printf("원소량: %f \n", atom[n - 1].atomicWeight);

	return 0;
}