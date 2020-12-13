#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 구조체를 이용해 3권의 도서에 대한 정보(저자, 제목, 페이지수)를 입력 받고 출력하는 프로그램

typedef struct book
{
	char author[100];
	char title[100];
	int page;
} Book;

int main()
{
	Book b[3];
	puts("도서 정보 입력 \n");

	for (int i = 0; i < 3; i++){
		printf("저자: "), gets(b[i].author); // 하나의 문자열 받기
		printf("제목: "), gets(b[i].title); // 마찬가지
		printf("페이지 수: "), scanf("%d", &b[i].page); // 정수 받기
		getchar(); // 위에 정수받을때 입력버퍼에 남겨진 엔터키 없애기
	}

	printf("\n도서 정보 출력 \n\n");

	for (int j = 0; j < 3; j++){
		printf("저자: %s \n", b[j].author);
		printf("제목: %s \n", b[j].title);
		printf("페이지 수: %d \n", b[j].page);
	}
	return 0;
}