#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//글자 퍼즐

int main()
{
	/*단어들 배열 초기화*/
	char width1[] = "strong";
	char width2[] = "bravo";
	char width3[] = "lean";
	char width4[] = "try";
	char width5[] = "bee";
	char width6[] = "decide";
	char height1[] = "novel";
	char height2[] = "globe";
	char height3[] = "brute";
	char height4[] = "red";
	char height5[] = "finale";

	/* 퍼즐 배열 공백을 - 로 표시 */
	char puzzle[8][8];

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			puzzle[i][j] = '-';
		}
	}

	/* 해당하는 곳에 알파벳 초기화 */
	puzzle[0][0] = 's';
	puzzle[0][4] = 'n';
	puzzle[0][5] = 'g';
	puzzle[2][1] = 'b';
	puzzle[2][7] = 'f';
	puzzle[4][4] = 'l';
	puzzle[5][1] = 't';
	puzzle[5][2] = 'r';
	puzzle[6][0] = 'b';
	puzzle[7][2] = 'd';

	/* 퍼즐 보여주기 */
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			printf("%c ", puzzle[i][j]);
		}
		putchar('\n');
	}

	int direction;
	int wordNumber;
	char word[10];
	
	while (1){
		/* 힌트 보여주기 */
		putchar('\n');
		puts("--------가로힌트--------");
		puts("1.강한");
		puts("2.환호의 감탄사");
		puts("3.기대다");
		puts("4.노력하다");
		puts("5.벌");
		puts("6.결정하다");
		putchar('\n');
		puts("--------세로힌트---------");
		puts("1.소설");
		puts("2.지구본, 지구의");
		puts("3.짐승, 야만적인");
		puts("4.빨강");
		puts("5.마지막 부분, 피날레");
		putchar('\n');

		/* 힌트를 보고 가로, 번호 선택 */
		printf("1.가로 2.세로 중 선택: "); scanf("%d", &direction);
		printf("맞출 단어의 번호: "); scanf("%d", &wordNumber);

		switch (direction){ // switch 문을 이용
		case 1: // 가로를 선택 했을 시
			switch (wordNumber){ 
			case 1:{ // 가로를 선택하고 1번을 선택 했을 시
					   printf("단어 입력: "); scanf("%s", word); // 1번에 해당하는 단어 맞추기

					   if (!strcmp(word, width1)){ // 두 문자열이 동일하면 0을 반환하므로 ! 로 true가 반환하도록

						   puts("맞았습니다!!! \n");
						   strcpy(puzzle[0], word); // 두 문자열이 맞았다면 puzzle에 복사해주기

						   for (int i = 0; i < 8; i++){ // 채워진 퍼즐 보여주기
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{ // 틀렸다면 넘어가기
						   puts("틀렸습니다!!!");
						   break;
					   }
			}
			case 2:{
					   printf("단어 입력: "); scanf("%s", word); // 1번과 동일
					   if (!strcmp(word, width2)){

						   puts("맞았습니다!!!");

						   char word1[] = "-bravo-f"; // 배열의 특정한 열부터 복사를 못함 
						   // bravo를 그대로 복사하면 - b r a v o - f 가 아닌 b r a v o 가 되므로
						   // 새로이 - b r a v o - f 문자열을 초기화하여 복사해준다
						   strcpy(puzzle[2], word1);

						   for (int i = 0; i < 8; i++){
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{
						   puts("틀렸습니다!!!");
						   break;
					   }
			}
			case 3:{ // 2번과 동일
					   printf("단어 입력: "); scanf("%s", word);
					   if (!strcmp(word, width3)){

						   puts("맞았습니다!!!");
						   char word1[] = "----lean"; // -bravo-f와 동일하게
						   strcpy(puzzle[4], word1);

						   for (int i = 0; i < 8; i++){
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{
						   puts("틀렸습니다!!!");
						   break;
					   }
			}
			case 4:{

			}
			case 5:{

			}
			case 6:{

			}

			}
		case 2: // 세로 선택 시
			switch (wordNumber){ // 배열에 문자열을 세로로 복사는 못하니 문자별로 복사 해줘야 할듯.. 노가다

			}
		}
	}
}