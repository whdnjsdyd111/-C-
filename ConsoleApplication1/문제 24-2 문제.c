#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ftell �Լ��� �̿��Ͽ� ������ ����Ʈ������ ũ�⸦ ����Ͽ� ��ȯ�ϴ� ���α׷�

int main()
{
	long ftel;

	/* ���� �б� */
	FILE *fp = fopen("C:\\���� 24-2.txt", "rt");

	while (1){ // ���� ����Ʈ�� ����Ű�� ���� ������ ũ��
		ftel = ftell(fp);
		if (fgetc(fp) == EOF) // ���̻� ���� ���� ���� EOF ��ȯ�� �ݺ��� Ż��
			break;
	}

	fclose(fp);

	printf("������ ũ��: %ld ����Ʈ \n", ftel);
	return 0;
}