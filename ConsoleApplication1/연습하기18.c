#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	while (1){ // 사용자가 입력하는 숫자가 홀수인지 짝수인지 판별하기
		printf("홀수를 입력: ");
		scanf("%d", &num);
		if (num % 2 == 0)
			puts("다시 입력!! \n");
		if (num % 2 == 1)
			break;
	}
	char arr[100][100]; // 100x100 공간의 배열 선언

	for (int i = 0; i < 100; i++){ // 모든 공간에 공백 채워주기
		for (int j = 0; j < 100; j++) // 이거 안해주면 *가 아닌 배열요소는 쓰레기값 출력
			arr[i][j] = ' ';
	}

	for (int i = 0; i < num / 2 + 1; i++){ // 사용자가 입력한 홀수의 반틈 + 1 만큼 실행
		arr[i][i] = '*'; // 각각 배열의 끝에 * 저장하기
		arr[i][(num-1) - i] = '*';
		arr[(num-1) - i][i] = '*';
		arr[(num-1) - i][(num-1) - i] = '*';
	}

	for (int i = 0; i < num; i++){ // 출력해서 보여주기
		for (int j = 0; j < num; j++){
			printf("%c ", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}