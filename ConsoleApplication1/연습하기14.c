#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ڷκ��� ���ҹ�ȣ�� �Է� �޾� ���ڹ�ȣ, ��ȣ, �̸�, ���ڷ� ���
typedef struct atom
{
	int atomicNumber;
	char atomicSymbol[20];
	char atomname[20];
	double atomicWeight;
} Atom;

int main()
{
	/* ���� �ֱ���ǥ ���� �Է� */

	Atom atom[102] = { { 1, "H", "Hydrogen", 1.0079 },
	{ 2, "He", "Helium", 4.0026 },
	{ 3, "Li", "Lithium", 6.9410 }, };



	/* ���� �ֱ���ǥ ���� �Է� */

	int n;
	printf("���� ��ȣ�� �Է�: ");
	scanf("%d", &n);

	printf("���ҹ�ȣ: %d \n", atom[n - 1].atomicNumber);
	printf("���ұ�ȣ: %s \n", atom[n - 1].atomicSymbol);
	printf("�����̸�: %s \n", atom[n - 1].atomname);
	printf("���ҷ�: %f \n", atom[n - 1].atomicWeight);

	return 0;
}