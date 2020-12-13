#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���̳ʸ� ���� ���·� ���� ����, ���� ,����ϱ�

int main()
{
	FILE *fp = fopen("C:\\file1.bin", "wb");
	if (fp == NULL){
		puts("file1.bin ���� ���� ����!");
		return -1;
	}

	char buf1[7] = { 1, 2, 3, 4, 5, 6, 7 };
	fwrite(buf1, 1, sizeof(buf1), fp);
	fclose(fp);

	FILE *fp1 = fopen("C:\\file1.bin", "rb");
	FILE *fp2 = fopen("C:\\file2.bin", "wb");
	if (fp1 == NULL || fp2 == NULL){
		puts("�ΰ��� ���� ���� ����!");
		return -1;
	}
	char buf2[7];
	while (1){
		int readCount = fread((void*)buf2, sizeof(char), sizeof(buf1), fp1);

		if (readCount < sizeof(buf1)){
			if (feof(fp1) != 0){
				fwrite((void*)buf2, sizeof(char), readCount, fp2);
				puts("���� ���� �Ϸ�!");
				break;
			}
			else
				puts("���� ���� ����!");
			break;
		}
		fwrite((void*)buf2, sizeof(char), readCount, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	FILE *fp3 = fopen("C:\\file2.bin", "rb");
	if (fp3 == NULL){
		puts("file2.bin ���� ���� ����!");
		return -1;
	}
	char buf3[7];

	fread((void*)buf3, sizeof(char), sizeof(buf3), fp3);
	for (int i = 0; i < 7; i++){
		printf("%d ", buf3[i]);
	}
	printf("\n");
	return 0;
}