#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#define N 256*256
#pragma warning(disable:4996)

char digits[11][5][4][3] =//0~9���� ����� ����
{
	{
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "��", "��", "��" }
	},
	{
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" }
	},
	{
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "  " },
		{ "��", "��", "��", "��" }
	},
	{
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "��", "��", "��", "��" }
	},
	{
		{ "��", "  ", "��", "  " },
		{ "��", "  ", "��", "  " },
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "��", "  " },
		{ "  ", "  ", "��", "  " }
	},
	{
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "  " },
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "��", "��", "��", "��" },
	},
	{
		{ "��", "  ", "  ", "  " },
		{ "��", "  ", "  ", "  " },
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "��", "��", "��" }
	},
	{
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" }
	},
	{
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "��", "��", "��" }
	},
	{
		{ "��", "��", "��", "��" },
		{ "��", "  ", "  ", "��" },
		{ "��", "��", "��", "��" },
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "  ", "��" }
	},
	{
		{ "  ", "  ", "  ", "��" },
		{ "  ", "  ", "��", "  " },
		{ "  ", "��", "��", "  " },
		{ "  ", "��", "  ", "  " },
		{ "��", "  ", "  ", "  " }
	}
};

int sx[6] = { 0, 10, 24, 34, 48, 58 };//�ú��ʸ� ����� x��ǥ 
int sx3[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };

const char *colons[5] = { " ", "��", "  ", "��", "  " };
int sx2[6] = { 20, 44 };//�ݷ��� ����� ��ǥ

void gotoxy1(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


//dn�ڸ��� ���� n�� ����ϴ� �Լ�
void DrawNum(int dn, int n)
{
	int y, x;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 4; x++)
		{
			gotoxy1(sx[dn] + x * 2, y + 8);
			printf("%s", digits[n][y][x]);
		}
		//		printf("\n");
	}
}

void DrawNum2(int dn, int n)
{
	int y, x;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 4; x++)
		{
			gotoxy1(sx3[dn] + x * 2, y);
			printf("%s", digits[n][y][x]);
		}
		//printf("\n");
	}
}

//�ݷ��� ����ϴ��Լ� n�� 0�̸� �ÿ� �л���, 1�̸� �а� �ʻ���
void DrawColon(int n)
{
	int y = 0;

	for (y = 0; y < 5; y++)
	{
		gotoxy1(sx2[n], y + 8);
		printf("%s\n", colons[y]);
	}

}
void callender()
{
	time_t timer;
	struct tm *t;

	timer = time(NULL);
	t = localtime(&timer);

	int year = (t->tm_year + 1900) % 10000;
	int month = t->tm_mon + 1;
	int day = t->tm_mday;

	char digitaldate[11];
	sprintf(digitaldate, "%04d:%02d:%02d", year, month, day);

	for (int x = 0; x<10; x++)
		DrawNum2(x, digitaldate[x] - 48);


	//digital_print(digitaldate);
	//printf("\n");
}

void DrawTime(int h, int m, int s)
{
	DrawNum(0, h / 10);//���� ���ڸ�
	DrawNum(1, h % 10);//���� ���ڸ�
	DrawColon(0);//�ݷ�
	DrawNum(2, m / 10);//���� ���ڸ�
	DrawNum(3, m % 10);//���� ���ڸ�
	DrawColon(1);//�ݷ�
	DrawNum(4, s / 10);//���� ���ڸ�
	DrawNum(5, s % 10);//���� ���ڸ�
}


void now_time()
{

	time_t now, before;
	struct tm nt;

	gotoxy1(0, 8);

	now = before = time(0); //�� ���� �ð��� ����
	localtime_s(&nt, &now); //���� �ð��� ����
	callender();
	DrawTime(nt.tm_hour, nt.tm_min, nt.tm_sec);//���� �ð��� ���

	while (kbhit() == 0)
	{
		now = time(0);//�ʴ��� �ð��� ����
		if (now != before)//�ٸ���
		{
			callender();
			before = now;//���� �ʴ��� �ð��� ���
			localtime_s(&nt, &now);//���� �ð��� ����
			DrawTime(nt.tm_hour, nt.tm_min, nt.tm_sec);//���� �ð��� ���
		}
	}
}
void main()
{
	system("mode con cols=110 lines=30");
	now_time();
}