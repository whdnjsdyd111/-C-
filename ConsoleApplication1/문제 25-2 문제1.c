#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 입력받은 문자열이 반대로 출력하는 함수 예) i am a boy -> boy a am i 메모리 동적 할당으로 해결

char *Inverse(void);

int main()
{
	char *str;
	str = Inverse();
	printf("바뀐 문자열: %s \n", str);

	free(str);
	return 0;
}

char *Inverse(void)
{
	char str[100]; // 문자열 입력받을 char 배열
	puts("하나의 문자열 입력: "); 
	gets(str); // 예로 "im boy" 입력 받음
	char *str1 = (char*)malloc(sizeof(char)* (strlen(str) + 1)); // 길이가 str 길이 (7) 만큼의 char 배열 메모리할당
	int j = 0;

	for (int i = strlen(str) - 1; i >= 0; i--){ // 끝에서 부터 찾기
		if (str[i] == 32 || i == 0){ // 문자열을 구분지을 스페이스바를 찾기
			int k = i + 1;
			if (i == 0) // i 가 0일때는
				k = 0; // i + 1 가 아닌 0부터 넣어주기
			while (1){ // 2 에서 스페이스바를 찾음
				if (str[k] == 32 || str[k] == NULL){ // k = 6, j = 3 = 스페이스바, j = 4 ㅣj = 6, k = 2
					str1[j] = 32;
					j++;
					break;
				}
				str1[j] = str[k]; // 0 3 b, 1 4 o, 2 5 y 두번째 4 0 i, 5 1 m 
				k++;
				j++;
			}
		}
	}
	str1[strlen(str)] = 0; // 그리고 마지막 str[6] 널문자 넣어주기 
	return str1;
}