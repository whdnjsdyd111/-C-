#include <stdio.h>

typedef struct table{
	int personNumber; // �ο���
	char personName[100]; // ������ �̸�
} Table;

int main()
{
	Table table[2];
	printf("%d %d", table[0].personNumber, table[0].personName);
	return 0;
}