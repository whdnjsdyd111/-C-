#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ü�� �л� �̸�, �й�, ���� �ް� ���� ���

typedef struct student
{
	char name[20];
	char class[20];
	int score;
} Student;

int main()
{
	Student std[3];
	puts("-----�л��� ������ �Է�-----");

	for (int i = 0; i < 3; i++){
		printf("�л� �̸�: "); scanf("%s", std[i].name);
		printf("�й�: "); scanf("%s", std[i].class);
		printf("����: "); scanf("%d", &std[i].score);
	}

	puts("-----�л� ����-----");
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