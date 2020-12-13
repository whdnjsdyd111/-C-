#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 두개의 주사위를 던졌을때 랜덤하게 결과가 나오는 함수

int main()
{
	int num1, num2;
	srand((int)time(NULL));

	printf("주사위 1의 결과: %d \n", rand() % 6 + 1); // 1~6 사이의 난수값이 나오도록
	printf("주사위 2의 결과: %d \n", rand() % 6 + 1);

	return 0;
}