#include <stdio.h>
// 회문(앞으로, 뒤로 읽나 차이가 없는 단어)를 구별하는 함수 예) 별똥별, 101, level

void Palindrome(char str[]);

int main()
{
	printf("영단어를 입력하시오. ");
	char str[100];
	scanf_s("%s", str, sizeof(str));

	Palindrome(str);
	return 0;
}

void Palindrome(char str[])
{
	int len = 0;
	while (str[len] != '\0') // 단어의 길이를 구하는 반복문
		len++;

	for (int i = 0; i < len; i++){
		if (str[i] != str[len - 1 - i]){ // 첫번째 요소와 마지막, 두번째와 끝에서 두번째... 을 구별
			printf("이 단어는 회문이 아닙니다. \n");
			return; // 회문이 아니면 함수 종료
		}
	}
	printf("이 단어는 회문입니다. \n"); // 판별이 다끝나고 무사히 반복문이 끝나면 회문
}