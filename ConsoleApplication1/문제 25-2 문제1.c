#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �Է¹��� ���ڿ��� �ݴ�� ����ϴ� �Լ� ��) i am a boy -> boy a am i �޸� ���� �Ҵ����� �ذ�

char *Inverse(void);

int main()
{
	char *str;
	str = Inverse();
	printf("�ٲ� ���ڿ�: %s \n", str);

	free(str);
	return 0;
}

char *Inverse(void)
{
	char str[100]; // ���ڿ� �Է¹��� char �迭
	puts("�ϳ��� ���ڿ� �Է�: "); 
	gets(str); // ���� "im boy" �Է� ����
	char *str1 = (char*)malloc(sizeof(char)* (strlen(str) + 1)); // ���̰� str ���� (7) ��ŭ�� char �迭 �޸��Ҵ�
	int j = 0;

	for (int i = strlen(str) - 1; i >= 0; i--){ // ������ ���� ã��
		if (str[i] == 32 || i == 0){ // ���ڿ��� �������� �����̽��ٸ� ã��
			int k = i + 1;
			if (i == 0) // i �� 0�϶���
				k = 0; // i + 1 �� �ƴ� 0���� �־��ֱ�
			while (1){ // 2 ���� �����̽��ٸ� ã��
				if (str[k] == 32 || str[k] == NULL){ // k = 6, j = 3 = �����̽���, j = 4 ��j = 6, k = 2
					str1[j] = 32;
					j++;
					break;
				}
				str1[j] = str[k]; // 0 3 b, 1 4 o, 2 5 y �ι�° 4 0 i, 5 1 m 
				k++;
				j++;
			}
		}
	}
	str1[strlen(str)] = 0; // �׸��� ������ str[6] �ι��� �־��ֱ� 
	return str1;
}