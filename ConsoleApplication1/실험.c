#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("C:\\data.t", "wt"); // ������ ���� ������ �����Ͽ� ������ �Ẹ��
	if (fp == NULL){
		puts("���Ͽ��� ����!!!");
		return -1;
	}
	
	fputs("A", fp);
	fputs("B", fp);
	fputs("C", fp);
	fclose(fp); // ��Ʈ�� �����ֱ�

	FILE *fp1 = fopen("C:\\data.txt", "rb"); // ������ ���� ������ �б�
	if (fp == NULL){
		puts("���Ͽ��� ����!!!");
		return -1;
	}
	int ch;

	for (int i = 0; i < 3; i++){
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp1);

	return 0;
}