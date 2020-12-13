#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// a 파일을 b파일에 복사하고 완료 됬는지 feof 함수로 확인 하기

int main()
{
	FILE *fp = fopen("C:\\sss.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!!!");
		return -1;
	}

	fputs("Hello World!! \n", fp);
	fclose(fp);

	FILE *sss = fopen("C:\\sss.txt", "rt");
	FILE *ddd = fopen("C:\\ddd.txt", "wt");

	if (sss == NULL || ddd == NULL){
		puts("파일 오픈 실패!!!");
		return -1;
	}
	int ch;

	while ((ch = fgetc(sss)) != EOF)
		fputc(ch, ddd);

	if (feof(sss) != 0)
		puts("파일 복사 완료!!!");
	else
		puts("파일 복사 실패!!!");

	fclose(sss);
	fclose(ddd);
	return 0;
}