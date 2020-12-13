#include <stdio.h>
//영단어를 입력받아 아스키코드가 가장 높은 값의 알파벳을 출력하는 함수

int main()
{
	printf("영단어를 입력:");
	char str[100];
	scanf_s("%s", str, sizeof(str));

	int len;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
		}
	}

	char n = str[0];

	for (int j = 0; j < len; j++)
	{
		if (n <= str[j])
		{
			n = str[j];
		}
	}

	printf("아스키코드가 가장 큰 값: %c, %d \n", n, n);
	return 0;
} 