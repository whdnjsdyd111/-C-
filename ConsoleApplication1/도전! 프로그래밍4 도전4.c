#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열이 저장된 파일을 열어 A와 P로 시작하는 단어수를 세는 프로그램. 단 모든 단어는 공백문자로 구분

int main()
{
	FILE *fp = fopen("C:\\word.txt", "rt");
	int A = 0; // A 갯수
	int P = 0; // P 갯수

	while (1){
		char str[100];
		int ret = fscanf(fp, "%s", str); // fscanf로 str에 저장
		if (ret == EOF) // 끝에 도달시 반복문 탈출
			break;
		if (str[0] == 65 || str[0] == 97) // 첫 요소가 A(a)이면 1증가
			A += 1;
		if (str[0] == 80 || str[0] == 112)// 마찬가지
			P += 1;
	}
	printf("A(a)로 시작하는 단어의 수: %d \n", A);
	printf("P(p)로 시작하는 단어의 수: %d \n", P);
	return 0;
}