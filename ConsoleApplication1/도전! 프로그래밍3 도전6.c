#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 숫자 야구

int main()
{
	int user[3];
	int computer[3];
	srand((int)time(NULL));
	printf("Start Game!!! \n\n");

	for (int i = 0; i >= 0; i++){ // 3스트라이크가 될 때까지 해야하므로 무한
		printf("숫자 3개를 선택: ");
		int strike = 0, ball = 0; // 스트라이크와 볼을 0으로 초기화

		for (int a = 0; a < 3; a++)
			scanf_s("%d", &user[a]); // 유저가 입력한 3개의 숫자
		for (int b = 0; b < 3; b++)
			computer[b] = rand() % 10; // 컴퓨터가 생성한 3개의 난수

		for (int z = 0; z < 3; z++){ // 위치와 숫자가 같으면 스트라이크 + 1 해주기
			if (user[z] == computer[z])
				strike += 1;
		}

		for (int x = 0; x < 3; x++){
			for (int y = 0; y < 3; y++){
				if (user[x] == computer[y]){ // 숫자만 같으면 볼 + 1 해주기
					ball += 1;
					if (x == y) // 하지만 위치까지 같으면 스트라이크이므로 제외해주기
						ball -= 1;
				}
			}
		}
		printf("%d번째 도전 결과: %dstrike, %dball !! \n\n", i + 1 , strike, ball);
		if (strike == 3){
			printf("Game Over! \n"); // 만약 3스트라이크면 끝내기
			break;
		}
	}
	return 0;
}