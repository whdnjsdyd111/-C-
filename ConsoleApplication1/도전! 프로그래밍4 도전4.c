#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڿ��� ����� ������ ���� A�� P�� �����ϴ� �ܾ���� ���� ���α׷�. �� ��� �ܾ�� ���鹮�ڷ� ����

int main()
{
	FILE *fp = fopen("C:\\word.txt", "rt");
	int A = 0; // A ����
	int P = 0; // P ����

	while (1){
		char str[100];
		int ret = fscanf(fp, "%s", str); // fscanf�� str�� ����
		if (ret == EOF) // ���� ���޽� �ݺ��� Ż��
			break;
		if (str[0] == 65 || str[0] == 97) // ù ��Ұ� A(a)�̸� 1����
			A += 1;
		if (str[0] == 80 || str[0] == 112)// ��������
			P += 1;
	}
	printf("A(a)�� �����ϴ� �ܾ��� ��: %d \n", A);
	printf("P(p)�� �����ϴ� �ܾ��� ��: %d \n", P);
	return 0;
}