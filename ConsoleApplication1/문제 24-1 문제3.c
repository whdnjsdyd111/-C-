#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문제 24-1의 문제1과 2에서 저장된 정보를 전체 출력하는 프로그램

int main()
{
	FILE *fp = fopen("C:\\Person.txt", "rt");
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1;
	}
	char str[100];

	while (fgets(str, sizeof(str), fp) != NULL)
		puts(str);

	return 0;
}