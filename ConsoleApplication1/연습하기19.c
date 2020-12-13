#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand((unsigned)time(NULL)); // 시드값

	int computerNumber = (rand() % 100) + 1; // 1~100사이의 난수 생성
	int userNumber; // 사용자 숫자
	int number = 0; // 횟수

	while (1){ // 무한 반복
		printf("숫자 입력: ");
		scanf("%d", &userNumber);

		number++;

		if (userNumber < computerNumber) // 컴퓨터가 더 클 때
			puts("컴퓨터의 숫자가 더 큽니다!! \n");
		if (userNumber > computerNumber) // 컴퓨터가 더 작을 때
			puts("컴퓨터의 숫자가 더 작습니다!! \n");
		if (userNumber == computerNumber){
			puts("정답입니다!!");
			break;
		}
	}

	printf("%d회 만에 이겼습니다!! \n", number);
	return 0;
}