#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// malloc 함수를 이용하여 문자열 반환함수 정의하는 문제해결하기

char *ReadUserName(void)
{
	void *name = (char*)malloc(sizeof(char)* 20);
	puts("당신의 이름은?");
	gets(name);
	return name;
}

int main()
{
	char *name1;
	char *name2;

	name1 = ReadUserName();
	name2 = ReadUserName();

	printf("name1: %s \nname2: %s\n", name1, name2);
	free(name1);
	free(name2);
	return 0;
}