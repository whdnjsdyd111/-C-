#include <stdio.h>
// 문자를 입력 받아 그 배열의 길이를 출력하는 함수

int main()
{
	char str[100];
	printf("문자를 입력 하시오. \n");
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == '\0')
		{
			printf("배열 str의 길이 = %d \n", i);
			break;
		}
	}
	return 0;
}