#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// a 파일을 b파일에 문자열로 읽어 복사하고 feof 함수로 복사완료를 체크

int main()
{
	FILE *fp = fopen("C:\\file1.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!!");
		return -1;
	}

	fputs("Hello Korea!! \n", fp);
	fputs("Hello Korean!! \n", fp);
	fputs("Hello C programing!! \n", fp);
	fclose(fp);

	FILE *fp1 = fopen("C:\\file1.txt", "rt");
	FILE *fp2 = fopen("C:\\file2.txt", "wt");
	char str[20];
	if (fp1 == NULL || fp2 == NULL){
		puts("파일 오픈 실패!!");
		return -1;
	}

	while (fgets(str, sizeof(str), fp1) != NULL)
		fputs(str, fp2);

	if (feof(fp1) != 0)
		puts("파일 복사 완료!!");
	else
		puts("파일 복사 실패!!");

	fclose(fp1);
	fclose(fp2);
	return 0;
}