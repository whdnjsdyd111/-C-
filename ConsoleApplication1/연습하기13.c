#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 구조체로 학생 이름, 학번, 점수 받고 성적 출력

typedef struct student
{
	char name[20];
	char class[20];
	int score;
} Student;

int main()
{
	Student std[3];
	puts("-----학생의 정보를 입력-----");

	for (int i = 0; i < 3; i++){
		printf("학생 이름: "); scanf("%s", std[i].name);
		printf("학번: "); scanf("%s", std[i].class);
		printf("점수: "); scanf("%d", &std[i].score);
	}

	puts("-----학생 정보-----");
	for (int i = 0; i < 3; i++){
		printf("%s %s %d ", std[i].name, std[i].class, std[i].score);
		switch (std[i].score / 5){
		case 20:
			puts("A+");
			break;
		case 19:
			puts("A+");
			break;
		case 18:
			puts("A0");
			break;
		case 17:
			puts("B+");
			break;
		case 16:
			puts("B0");
			break;
		case 15:
			puts("C+");
			break;
		case 14:
			puts("C0");
			break;
		case 13:
			puts("D+");
			break;
		case 12:
			puts("D0");
			break;
		default:
			puts("F");
		}
	}
	return 0;
}