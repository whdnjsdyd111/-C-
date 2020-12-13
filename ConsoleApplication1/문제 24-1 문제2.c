#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 24-1 문제1 의 파일에 데이터 추가하기

int main()
{
	FILE *fp = fopen("C:\\Person.txt", "at"); // a 는 파일 끝에 덧붙여 추가
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1;
	}

	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", fp);
	fputs("#취미: 축구 \n", fp);
	fclose(fp);

	return 0;
}