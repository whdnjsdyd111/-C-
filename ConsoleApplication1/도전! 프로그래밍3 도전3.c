#include <stdio.h>
#include <stdlib.h>
// 99이하의 무작위 난수 5개를 출력

int main()
{
	for (int i = 0; i < 5; i++)
		printf("%d ", rand() % 100); // % 연산자는 나머지를 출력하므로 99이하의 자연수가 나오게됨

	return 0;
}