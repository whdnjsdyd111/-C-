#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// �� ���� �ؽ�Ʈ ������ ������ �ٸ��� �� ���� �ϳ����̵� �ٸ��ɷ� �Ǻ�

int main()
{
	FILE *fp1 = fopen("C:\\text1.txt", "rt");
	FILE *fp2 = fopen("C:\\text2.txt", "rt");

	while (1){
		char str1; // char �� ���� 2�� ����
		char str2;
		str1 = fgetc(fp1); // �� �ؽ�Ʈ���Ϸ� ���� �ѱ��ھ� �޾�
		str2 = fgetc(fp2); // ���� char ������ ����
		if (str1 != str2){ // ���ڰ� �ٸ��ٸ� �ٸ��ٰ� �Ǻ�
			printf("�� �ؽ�Ʈ ������ �ٸ��ϴ�. \n");
			return 0;
		}
		if (str1 == EOF && str2 == EOF) // ������ ������ ������ �����ϸ� �ݺ��� Ż���ϰ� ���ٰ� �Ǻ�
			break;
	}
	printf("�� �ؽ�Ʈ ������ �����ϴ�. \n");
	return 0;
}