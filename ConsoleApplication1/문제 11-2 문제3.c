#include <stdio.h>
//���ܾ �Է¹޾� �ƽ�Ű�ڵ尡 ���� ���� ���� ���ĺ��� ����ϴ� �Լ�

int main()
{
	printf("���ܾ �Է�:");
	char str[100];
	scanf_s("%s", str, sizeof(str));

	int len;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
		}
	}

	char n = str[0];

	for (int j = 0; j < len; j++)
	{
		if (n <= str[j])
		{
			n = str[j];
		}
	}

	printf("�ƽ�Ű�ڵ尡 ���� ū ��: %c, %d \n", n, n);
	return 0;
} 