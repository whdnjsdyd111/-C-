#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 파일 위치 지시자인 fseek 함수 테스트해보기

int main()
{
	FILE *fp = fopen("C:\\fseekTest.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("C:\\fseekTest.txt", "rt");

	/* SEEK_SET test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	fseek(fp, 3, SEEK_CUR);
	putchar(fgetc(fp));

	/* SEEK_END test */
	fseek(fp, -1, SEEK_END);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}