#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("C:\\data.t", "wt"); // 지정한 곳에 파일을 형성하여 데이터 써보기
	if (fp == NULL){
		puts("파일오픈 실패!!!");
		return -1;
	}
	
	fputs("A", fp);
	fputs("B", fp);
	fputs("C", fp);
	fclose(fp); // 스트림 없애주기

	FILE *fp1 = fopen("C:\\data.txt", "rb"); // 지정한 곳의 파일을 읽기
	if (fp == NULL){
		puts("파일오픈 실패!!!");
		return -1;
	}
	int ch;

	for (int i = 0; i < 3; i++){
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp1);

	return 0;
}