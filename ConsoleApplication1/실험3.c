#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// a ������ b���Ͽ� ���ڿ��� �о� �����ϰ� feof �Լ��� ����ϷḦ üũ

int main()
{
	FILE *fp = fopen("C:\\file1.txt", "wt");
	if (fp == NULL){
		puts("���� ���� ����!!");
		return -1;
	}

	fputs("Hello Korea!! \n", fp);
	fputs("Hello Korean!! \n", fp);
	fputs("Hello C programing!! \n", fp);
	fclose(fp);

	FILE *fp1 = fopen("C:\\file1.txt", "rt");
	FILE *fp2 = fopen("C:\\file2.txt", "wt");
	char str[20];
	if (fp1 == NULL || fp2 == NULL){
		puts("���� ���� ����!!");
		return -1;
	}

	while (fgets(str, sizeof(str), fp1) != NULL)
		fputs(str, fp2);

	if (feof(fp1) != 0)
		puts("���� ���� �Ϸ�!!");
	else
		puts("���� ���� ����!!");

	fclose(fp1);
	fclose(fp2);
	return 0;
}