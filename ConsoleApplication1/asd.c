#include <stdio.h>

typedef struct table{
	int personNumber; // 인원수
	char personName[100]; // 예약자 이름
} Table;

int main()
{
	Table table[2];
	printf("%d %d", table[0].personNumber, table[0].personName);
	return 0;
}