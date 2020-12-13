#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ftell 함수를 이용하여 파일을 바이트단위로 크기를 계산하여 반환하는 프로그램

int main()
{
	long ftel;

	/* 파일 읽기 */
	FILE *fp = fopen("C:\\문제 24-2.txt", "rt");

	while (1){ // 끝의 바이트를 가리키는 것이 파일의 크기
		ftel = ftell(fp);
		if (fgetc(fp) == EOF) // 더이상 읽을 것이 없어 EOF 반환시 반복문 탈출
			break;
	}

	fclose(fp);

	printf("파일의 크기: %ld 바이트 \n", ftel);
	return 0;
}