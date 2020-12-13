#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student
{
	char id[5];
	char name[10];
	int score[3];
	int sum;
	double avg;
	int rank;
};

int main(void)
{
	struct student arr[100];
	int i, k, num;

	printf("학생수를 입력하시오: ");
	scanf_s("%d", &num);
	if (num <= 0)
		printf("학생수는 0보다 커야 합니다\n");    // 학생수를 0이하로 입력시 잘못 오류 메시지 출력
	else if (num > 100)
		printf("학생수는 100보다 작아야 합니다\n");  // 학생수를 100보다 큰 값으로 잘못 입력시 오류 메시지 출력
	else if (num > 0 && num <= 100)
	{
		for (i = 0; i < num; i++)
		{
			printf("\n학생의 성적입력(학번 이름 C언어I 인터넷활용 운영체제실습 :");
			scanf_s("%s %s %d %d %d",
				arr[i].id, sizeof(arr[i].id),
				arr[i].name, sizeof(arr[i].name),
				&arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);

			// 총점
			arr[i].sum = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];

			// 평균
			arr[i].avg = (double)arr[i].sum / 3;
		}

		// 석차
		for (i = 0; i < num; i++)
		{
			arr[i].rank = 1;
			for (k = 0; k < num; k++)
			{
				if (arr[i].sum < arr[k].sum)
				{
					arr[i].rank++;
				}
			}
		}

		printf("\n학번\t이름\tC언어I\t인터넷활용\t운영체제실습\t총점\t평균\t등수");
		printf("\n----------------------------------------------------------------------------");
		for (i = 0; i < num; i++)
		{
			printf("\n%s\t%s\t%d\t\t%d\t\t%d\t%d\t%.1f\t%d\n",
				arr[i].id, arr[i].name,
				arr[i].score[0], arr[i].score[1], arr[i].score[2],
				arr[i].sum, arr[i].avg, arr[i].rank);
		}
		printf("\n----------------------------------------------------------------------------\n");

		//while ((score[i] = getchar()) != '\n'&&score[i] != EOF);
	}

	return 0;
}