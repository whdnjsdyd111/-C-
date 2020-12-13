#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ����ڷκ��� �̸��� ���̸� �Է¹޾� �λ���� �̸��� ���̰� ���� ������ �ٸ��� �Ǻ�

void NameCompare(char str1, char str2);
void AgeCompare(char str1, char str2);

int main()
{
	char str1[100];
	char str2[100];

	fgets(str1, sizeof(str1), stdin); // �� ����� �̸�, ���̸� �ޱ�
	fgets(str2, sizeof(str2), stdin);

	NameCompare(str1, str2);
	AgeCompare(str1, str2);

	return 0;
}

void NameCompare(char str1[], char str2[])
{
	char arr1[100];
	char arr2[100];

	for (int i = 0; i < strlen(str1) - 1; i++){ // str1�� arr1�� ����
		if (str1[i] == 32){ // str1 �迭�� �����̽��� �����ϸ� ������
			arr1[i] = 0; // �����鼭 arr1 ���� �ι��� �ֱ� ��
			break;
		}
		if (str1[i] != 32) // str1 �迭�� �����̽��� �������� �迭(�̸�)�� arr1�� ����
			arr1[i] = str1[i];
	}
	for (int j = 0; j < strlen(str2) - 1; j++){
		if (str2[j] == 32){
			arr2[j] = 0;
			break;
		}
		if (str2[j] != 32)
			arr2[j] = str2[j];
	}

	if (strcmp(arr1, arr2) == 0)
		puts("�� ����� �̸��� ���� \n");
	else
		puts("�� ����� �̸��� �ٸ� \n");
}

void AgeCompare(char str1[], char str2[])
{
	char arr1[100];
	char arr2[100];

	for (int i = 0; i < strlen(str1) - 1; i++){ // �����̽��� ã��
		if (str1[i] == 32){ // �����̽��� ã��
			for (int a = i + 1; a < strlen(str1) - 1; a++){ // �����̽��� ���� �迭��(����)�� arr�� �����ϱ�
				arr1[a - (i + 1) ] = str1[a];
				if (a == strlen(str1) - 2) // ���� �����ϸ� arr1�� �� �־��ֱ�
					arr1[a - i] = 0;
			}
			break;
		}
	}
	for (int j = 0; j < strlen(str2) - 1; j++){
		if (str2[j] == 32){
			for (int a = j + 1; a < strlen(str2) - 1; a++){
				arr2[a - (j + 1) ] = str2[a];
				if (a == strlen(str2) - 2)
					arr2[a - j] = 0;
			}
			break;
		}
	}

	if (strcmp(arr1, arr2) == 0)
		puts("�� ����� ���̴� ���� \n");
	else
		puts("�� ����� ���̴� �ٸ� \n");
}