#include <stdio.h>
//����ڰ� �ܾ� �Է½� �ܾ ������ ��µǴ� �Լ�

int main()
{
	char str[100];
	printf("���ܾ �Է�: ");
	scanf_s("%s", str, sizeof(str));

	int len;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
		}
	}
	
	for (int j = 0; j < (len / 2); j++)
	{
		int n = str[j];
		str[j] = str[len - (j + 1)];
		str[len - (j + 1)] = n;
	}

	printf("%s", str);
	return 0;
} 