#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("C:\\data1.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!!!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yong \n", fp);
	fclose(fp);

	FILE *fp1 = fopen("C:\\data1.txt", "rt");
	if (fp1 == NULL){
		puts("파일 오픈 실패!!!");
		return -1;
	}

	int ch;
	char str[20];

	ch = fgetc(fp1);
	printf("%c \n", ch);
	ch = fgetc(fp1);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp1);
	printf("%s", str);
	fgets(str, sizeof(str), fp1);
	printf("%s", str);
	fclose(fp1);

	return 0;
}