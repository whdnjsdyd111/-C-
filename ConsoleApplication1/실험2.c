#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// a ������ b���Ͽ� �����ϰ� �Ϸ� ����� feof �Լ��� Ȯ�� �ϱ�

int main()
{
	FILE *fp = fopen("C:\\sss.txt", "wt");
	if (fp == NULL){
		puts("���� ���� ����!!!");
		return -1;
	}

	fputs("Hello World!! \n", fp);
	fclose(fp);

	FILE *sss = fopen("C:\\sss.txt", "rt");
	FILE *ddd = fopen("C:\\ddd.txt", "wt");

	if (sss == NULL || ddd == NULL){
		puts("���� ���� ����!!!");
		return -1;
	}
	int ch;

	while ((ch = fgetc(sss)) != EOF)
		fputc(ch, ddd);

	if (feof(sss) != 0)
		puts("���� ���� �Ϸ�!!!");
	else
		puts("���� ���� ����!!!");

	fclose(sss);
	fclose(ddd);
	return 0;
}