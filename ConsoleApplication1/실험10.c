#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// malloc �Լ��� �̿��Ͽ� ���ڿ� ��ȯ�Լ� �����ϴ� �����ذ��ϱ�

char *ReadUserName(void)
{
	void *name = (char*)malloc(sizeof(char)* 20);
	puts("����� �̸���?");
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