#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 24-1 ����1 �� ���Ͽ� ������ �߰��ϱ�

int main()
{
	FILE *fp = fopen("C:\\Person.txt", "at"); // a �� ���� ���� ���ٿ� �߰�
	if (fp == NULL){
		puts("���� ���� ����!");
		return -1;
	}

	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);
	fclose(fp);

	return 0;
}