#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char str1[20];
	gets(str);
	fflush(stdin);
	str[0] = '\0';
	gets(str1);
	fflush(stdin);
	for (int i = 0; i < strlen(str1); i++){
		str[i] = str1[i];
	}
	printf("str: %s \n", str);
	printf("str1: %s \n", str1);
	return 0;
}