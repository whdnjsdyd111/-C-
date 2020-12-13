#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//문자열을 받아 문자열 속에 있는 숫자들만을 더하는 함수

int main()
{
	char str[100];
	char str1[1];
	int str2;
	scanf("%s", str);
	int total = 0;

	for (int i = 0; i < strlen(str); i++){
		str1[0] = str[i];
		str2 = atoi(str1);
		total += str2;
	}

	printf("총합: %d \n", total);
	return 0;
}