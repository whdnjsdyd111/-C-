#include <stdio.h>
//getchar �� putchar �� �̿��Ͽ� ���ĺ� �Է¹����� �ҹ��ڴ� �빮�� �빮�ڴ� �ҹ���, �׿� ���� ���� ���

int main()
{
	int ch;
	ch = getchar();

	if (ch < 65)
		puts("����!! \n");
	if (ch>64 && ch < 91)
		putchar(ch + 32);
	if (ch>90 && ch < 97)
		puts("����!! \n");
	if (ch>96 && ch < 123)
		putchar(ch - 32);
	if (ch == 126 && ch == 127)
		puts("����!! \n");

	return 0;
}