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

	printf("�л����� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	if (num <= 0)
		printf("�л����� 0���� Ŀ�� �մϴ�\n");    // �л����� 0���Ϸ� �Է½� �߸� ���� �޽��� ���
	else if (num > 100)
		printf("�л����� 100���� �۾ƾ� �մϴ�\n");  // �л����� 100���� ū ������ �߸� �Է½� ���� �޽��� ���
	else if (num > 0 && num <= 100)
	{
		for (i = 0; i < num; i++)
		{
			printf("\n�л��� �����Է�(�й� �̸� C���I ���ͳ�Ȱ�� �ü���ǽ� :");
			scanf_s("%s %s %d %d %d",
				arr[i].id, sizeof(arr[i].id),
				arr[i].name, sizeof(arr[i].name),
				&arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);

			// ����
			arr[i].sum = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];

			// ���
			arr[i].avg = (double)arr[i].sum / 3;
		}

		// ����
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

		printf("\n�й�\t�̸�\tC���I\t���ͳ�Ȱ��\t�ü���ǽ�\t����\t���\t���");
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