#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� 24-1�� ����1�� 2���� ����� ������ ��ü ����ϴ� ���α׷�

int main()
{
	FILE *fp = fopen("C:\\Person.txt", "rt");
	if (fp == NULL){
		puts("���� ���� ����!");
		return -1;
	}
	char str[100];

	while (fgets(str, sizeof(str), fp) != NULL)
		puts(str);

	return 0;
}