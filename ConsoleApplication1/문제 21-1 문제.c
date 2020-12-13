#include <stdio.h>
//getchar 과 putchar 을 이용하여 알파벳 입력받으면 소문자는 대문자 대문자는 소문자, 그외 문자 오류 출력

int main()
{
	int ch;
	ch = getchar();

	if (ch < 65)
		puts("오류!! \n");
	if (ch>64 && ch < 91)
		putchar(ch + 32);
	if (ch>90 && ch < 97)
		puts("오류!! \n");
	if (ch>96 && ch < 123)
		putchar(ch - 32);
	if (ch == 126 && ch == 127)
		puts("오류!! \n");

	return 0;
}