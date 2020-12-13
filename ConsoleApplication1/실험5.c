#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 사람의 이름, 성별, 나이를 입력 받아 파일에 출력하기

int main()
{
	FILE *fp = fopen("C:\\Friend.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1;
	}

	char name[10];
	char sex;
	int age;

	for (int i = 0; i < 3; i++){
		printf("이름 성별 나이 순으로 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // 입력 버퍼에 남아있는 엔터 키의 소멸을 위해 작성
		fprintf(fp, "%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}