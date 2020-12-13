#include <stdio.h>
// static 변수를 활용하는 함수

int AddToTotal(int num)
{
	static total = 0; // int main >> static total
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("입력%d: ", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}
	return 0;
}