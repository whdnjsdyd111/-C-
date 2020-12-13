#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// str1과 str2를 사용자로 부터 문자를 받아 각각을 str3에 복붙하는 함수

int main()
{
	char str1[100];
	char str2[100];
	char str3[100];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	strcpy(str3, str1); // 우선 str3 에 str1 을 복사 하기

	str3[strlen(str3) - 1] = '\0'; // 덧붙이는 것은 \0에 붙이므로 str3 길이 - 1 에 0 저장

	strcat(str3, str2); // \0에 덧붙혀짐

	printf("%s", str3);
	return 0;
}