#include <stdio.h>
//세 과목의 점수의 평균을 학점을 출력하는 함수

int main(void)
{
	int Math, English,	Language;
	printf("당신의 세 과목의 입력 하시오. \n");
	printf("수학:"); scanf_s("%d", &Math);
	printf("영어:"); scanf_s("%d", &English);
	printf("국어:"); scanf_s("%d", &Language);

	int total = (Math + English + Language) / 3;
	printf("당신의 학점:%d 고로 ", total);
	if (total > 90)
		printf("A \n");
	else if (total > 80)
		printf("B \n");
	else if (total > 70)
		printf("C \n");
	else if (total > 50)
		printf("D \n");
	else if (total <= 50)
		printf("F \n");
	return 0;
}