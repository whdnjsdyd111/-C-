#include <stdio.h>
// ���ڸ� �Է� �޾� �� �迭�� ���̸� ����ϴ� �Լ�

int main()
{
	char str[100];
	printf("���ڸ� �Է� �Ͻÿ�. \n");
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == '\0')
		{
			printf("�迭 str�� ���� = %d \n", i);
			break;
		}
	}
	return 0;
}