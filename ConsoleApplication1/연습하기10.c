#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main()
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); //���ۿ� �ִ� �� �����͸� ������
	fflush(stdin); // �̰ɷ� �Է¹��۸� ����൵ ����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s\n", perID);
	printf("�̸�: %s\n", name);

	return 0;
}