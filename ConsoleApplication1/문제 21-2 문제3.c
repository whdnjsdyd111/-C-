#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 사용자로부터 이름과 나이를 입력받아 두사람의 이름과 나이가 각각 같은지 다른지 판별

void NameCompare(char str1, char str2);
void AgeCompare(char str1, char str2);

int main()
{
	char str1[100];
	char str2[100];

	fgets(str1, sizeof(str1), stdin); // 두 사람의 이름, 나이를 받기
	fgets(str2, sizeof(str2), stdin);

	NameCompare(str1, str2);
	AgeCompare(str1, str2);

	return 0;
}

void NameCompare(char str1[], char str2[])
{
	char arr1[100];
	char arr2[100];

	for (int i = 0; i < strlen(str1) - 1; i++){ // str1을 arr1에 저장
		if (str1[i] == 32){ // str1 배열에 스페이스에 도달하면 끝내기
			arr1[i] = 0; // 끝내면서 arr1 끝에 널문자 넣기 ★
			break;
		}
		if (str1[i] != 32) // str1 배열의 스페이스바 전까지의 배열(이름)을 arr1에 저장
			arr1[i] = str1[i];
	}
	for (int j = 0; j < strlen(str2) - 1; j++){
		if (str2[j] == 32){
			arr2[j] = 0;
			break;
		}
		if (str2[j] != 32)
			arr2[j] = str2[j];
	}

	if (strcmp(arr1, arr2) == 0)
		puts("두 사람의 이름은 같음 \n");
	else
		puts("두 사람의 이름은 다름 \n");
}

void AgeCompare(char str1[], char str2[])
{
	char arr1[100];
	char arr2[100];

	for (int i = 0; i < strlen(str1) - 1; i++){ // 스페이스바 찾기
		if (str1[i] == 32){ // 스페이스바 찾기
			for (int a = i + 1; a < strlen(str1) - 1; a++){ // 스페이스바 다음 배열들(나이)를 arr에 저장하기
				arr1[a - (i + 1) ] = str1[a];
				if (a == strlen(str1) - 2) // 끝에 도달하면 arr1에 널 넣어주기
					arr1[a - i] = 0;
			}
			break;
		}
	}
	for (int j = 0; j < strlen(str2) - 1; j++){
		if (str2[j] == 32){
			for (int a = j + 1; a < strlen(str2) - 1; a++){
				arr2[a - (j + 1) ] = str2[a];
				if (a == strlen(str2) - 2)
					arr2[a - j] = 0;
			}
			break;
		}
	}

	if (strcmp(arr1, arr2) == 0)
		puts("두 사람의 나이는 같음 \n");
	else
		puts("두 사람의 나이는 다름 \n");
}