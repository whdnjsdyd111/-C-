#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����� �̸�, ����, ���̸� �Է� �޾� ���Ͽ� ����ϱ�

int main()
{
	FILE *fp = fopen("C:\\Friend.txt", "wt");
	if (fp == NULL){
		puts("���� ���� ����!");
		return -1;
	}

	char name[10];
	char sex;
	int age;

	for (int i = 0; i < 3; i++){
		printf("�̸� ���� ���� ������ �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // �Է� ���ۿ� �����ִ� ���� Ű�� �Ҹ��� ���� �ۼ�
		fprintf(fp, "%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}