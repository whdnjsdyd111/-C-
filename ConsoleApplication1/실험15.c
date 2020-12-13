#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gets로 문자열 입력받으면 그다음 배열요소 자동으로 널임
int main()
{
	char str[20];
	gets(str);
	char str1[20];
	gets(str1);
	char str2[20];
	printf("%s \n", str);
	printf("%d %d %d %d \n", str[0], str[1], str[2], str[3]);
	printf("%s \n", str1);
	printf("%d %d %d %d \n", str1[0], str1[1], str1[2], str1[3]);
	printf("%d \n", str2[0]);
	return 0;
}