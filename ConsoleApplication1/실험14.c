#include <stdio.h>
// �̹� ���ڿ��� ����� �迭�� ù ��ҿ� �ι��� ������ �ƹ��͵� ���� ���·ε�

int main()
{
	char str[8] = "asdfghd";
	printf("%s \n", str);
	str[0] = '\0';
	printf("%s \n", str);
	return 0;
}