#include <stdio.h>
//사용자가 단어 입력시 단어가 뒤집혀 출력되는 함수

int main()
{
	char str[100];
	printf("영단어를 입력: ");
	scanf_s("%s", str, sizeof(str));

	int len;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
		}
	}
	
	for (int j = 0; j < (len / 2); j++)
	{
		int n = str[j];
		str[j] = str[len - (j + 1)];
		str[len - (j + 1)] = n;
	}

	printf("%s", str);
	return 0;
} 