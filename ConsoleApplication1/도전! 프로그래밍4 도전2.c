#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// ����1�� ������ ���� �Ҵ��ϴ� ���·� �籸�� �غ���

typedef struct book
{
	char author[100];
	char title[100];
	int page;
} Book;

Book *Library(void) // 100����Ʈ ũ���� 3�� ������ �޸𸮸� �Ҵ��Ͽ� ���� ��Ҹ� �����ϴ� �Լ�
{
	Book *bok;

	bok = calloc(3, 100);
	printf("����: "), scanf("%s", bok->author);
	printf("����: "), scanf("%s", bok->title);
	printf("������ ��: "), scanf("%d", &bok->page);
	return bok;
}
int main()
{
	Book *book[3] = { Library(), Library(), Library() }; // �� �Լ��� �� �迭�� ����

	printf("\n");

	for (int i = 0; i < 3; i++){
		printf("����: "), puts(book[i]->author);
		printf("����: "), puts(book[i]->title);
		printf("������ ��: %d \n", book[i]->page);
	}
	for (int j = 0; j < 3; j++)
		free(book[j]);

	return 0;
}