#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ftell �Լ� �׽�Ʈ �غ���

int main()
{
	long ftel;

	FILE *fp = fopen("C:\\ftell.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("C:\\ftell.txt", "rt");

	for (int i = 0; i < 4; i++){
		putchar(fgetc(fp));
		ftel = ftell(fp); // ������ ��ġ�� ���
		fseek(fp, -1, SEEK_END); // - ���
		putchar(fgetc(fp));
		fseek(fp, ftel, SEEK_SET); // ftell �Լ��� ���� ��ġ�� �ǵ�����
	}

	fclose(fp);
	return 0;
}