#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ftell 함수 테스트 해보기

int main()
{
	long ftel;

	FILE *fp = fopen("C:\\ftell.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("C:\\ftell.txt", "rt");

	for (int i = 0; i < 4; i++){
		putchar(fgetc(fp));
		ftel = ftell(fp); // 이전의 위치를 기억
		fseek(fp, -1, SEEK_END); // - 출력
		putchar(fgetc(fp));
		fseek(fp, ftel, SEEK_SET); // ftell 함수로 이전 위치로 되돌리기
	}

	fclose(fp);
	return 0;
}