#include <stdio.h>
// Good time을 문자열 변수를 이용하지 않고 출력하는 함수

int main(void)
{
	char arr[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };

	for (int i = 0; i < 9; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}