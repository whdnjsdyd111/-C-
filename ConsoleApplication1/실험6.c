#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����5 ���� ������ ������ �о��� ����ϱ�

int main()
{
	char name[20];
	char sex;
	int age;

	FILE *fp = fopen("C:\\Friend.txt", "rt");
	int ret;

	while (1){
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("�̸�, ����, ����: %s, %c, %d \n", name, sex, age);
	}

	fclose(fp);
	return 0;
}