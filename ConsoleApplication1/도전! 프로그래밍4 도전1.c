#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ü�� �̿��� 3���� ������ ���� ����(����, ����, ��������)�� �Է� �ް� ����ϴ� ���α׷�

typedef struct book
{
	char author[100];
	char title[100];
	int page;
} Book;

int main()
{
	Book b[3];
	puts("���� ���� �Է� \n");

	for (int i = 0; i < 3; i++){
		printf("����: "), gets(b[i].author); // �ϳ��� ���ڿ� �ޱ�
		printf("����: "), gets(b[i].title); // ��������
		printf("������ ��: "), scanf("%d", &b[i].page); // ���� �ޱ�
		getchar(); // ���� ���������� �Է¹��ۿ� ������ ����Ű ���ֱ�
	}

	printf("\n���� ���� ��� \n\n");

	for (int j = 0; j < 3; j++){
		printf("����: %s \n", b[j].author);
		printf("����: %s \n", b[j].title);
		printf("������ ��: %d \n", b[j].page);
	}
	return 0;
}