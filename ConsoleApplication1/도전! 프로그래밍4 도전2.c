#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 도전1의 내용을 동적 할당하는 형태로 재구현 해보기

typedef struct book
{
	char author[100];
	char title[100];
	int page;
} Book;

Book *Library(void) // 100바이트 크기의 3개 공간의 메모리를 할당하여 각각 요소를 저장하는 함수
{
	Book *bok;

	bok = calloc(3, 100);
	printf("저자: "), scanf("%s", bok->author);
	printf("제목: "), scanf("%s", bok->title);
	printf("페이지 수: "), scanf("%d", &bok->page);
	return bok;
}
int main()
{
	Book *book[3] = { Library(), Library(), Library() }; // 위 함수를 각 배열에 저장

	printf("\n");

	for (int i = 0; i < 3; i++){
		printf("저자: "), puts(book[i]->author);
		printf("제목: "), puts(book[i]->title);
		printf("페이지 수: %d \n", book[i]->page);
	}
	for (int j = 0; j < 3; j++)
		free(book[j]);

	return 0;
}