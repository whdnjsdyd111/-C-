#include <stdio.h>
// 이미 문자열이 저장된 배열의 첫 요소에 널문자 넣으면 아무것도 없는 상태로됨

int main()
{
	char str[8] = "asdfghd";
	printf("%s \n", str);
	str[0] = '\0';
	printf("%s \n", str);
	return 0;
}