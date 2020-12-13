#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 이름, 주민번호, 전화번호 저장하기

int main()
{
	FILE *fp = fopen("C:\\Person.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1;
	}

	fputs("#이름: 윤성우 \n", fp);
	fputs("#주민번호: 900208-1012589 \n", fp);
	fputs("#전화번호: 010-1111-2222 \n", fp);

	fclose(fp);
	return 0;
}