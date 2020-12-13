#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 두 개의 텍스트 파일이 같은지 다른지 비교 공백 하나차이도 다른걸로 판별

int main()
{
	FILE *fp1 = fopen("C:\\text1.txt", "rt");
	FILE *fp2 = fopen("C:\\text2.txt", "rt");

	while (1){
		char str1; // char 형 변수 2개 선언
		char str2;
		str1 = fgetc(fp1); // 두 텍스트파일로 부터 한글자씩 받아
		str2 = fgetc(fp2); // 각각 char 변수에 저장
		if (str1 != str2){ // 글자가 다르다면 다르다고 판별
			printf("두 텍스트 파일은 다릅니다. \n");
			return 0;
		}
		if (str1 == EOF && str2 == EOF) // 파일의 끝까지 무사히 도달하면 반복문 탈출하고 같다고 판별
			break;
	}
	printf("두 텍스트 파일은 같습니다. \n");
	return 0;
}