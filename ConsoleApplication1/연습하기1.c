#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#define N 256*256
#pragma warning(disable:4996)

char digits[11][5][4][3] =//0~9까지 출력할 정보
{
	{
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "■", "■", "■" }
	},
	{
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" }
	},
	{
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "  " },
		{ "■", "■", "■", "■" }
	},
	{
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "■", "■", "■", "■" }
	},
	{
		{ "■", "  ", "■", "  " },
		{ "■", "  ", "■", "  " },
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "■", "  " },
		{ "  ", "  ", "■", "  " }
	},
	{
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "  " },
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "■", "■", "■", "■" },
	},
	{
		{ "■", "  ", "  ", "  " },
		{ "■", "  ", "  ", "  " },
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "■", "■", "■" }
	},
	{
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" }
	},
	{
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "■", "■", "■" }
	},
	{
		{ "■", "■", "■", "■" },
		{ "■", "  ", "  ", "■" },
		{ "■", "■", "■", "■" },
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "  ", "■" }
	},
	{
		{ "  ", "  ", "  ", "■" },
		{ "  ", "  ", "■", "  " },
		{ "  ", "■", "■", "  " },
		{ "  ", "■", "  ", "  " },
		{ "■", "  ", "  ", "  " }
	}
};

int sx[6] = { 0, 10, 24, 34, 48, 58 };//시분초를 출력할 x좌표 
int sx3[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };

const char *colons[5] = { " ", "■", "  ", "■", "  " };
int sx2[6] = { 20, 44 };//콜론을 출력할 좌표

void gotoxy1(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


//dn자리에 정수 n을 출력하는 함수
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

//콜론을 출력하는함수 n이 0이면 시와 분사이, 1이면 분과 초사이
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
	DrawNum(0, h / 10);//시의 앞자리
	DrawNum(1, h % 10);//시의 뒷자리
	DrawColon(0);//콜론
	DrawNum(2, m / 10);//분의 앞자리
	DrawNum(3, m % 10);//분의 뒷자리
	DrawColon(1);//콜론
	DrawNum(4, s / 10);//초의 앞자리
	DrawNum(5, s % 10);//초의 뒷자리
}


void now_time()
{

	time_t now, before;
	struct tm nt;

	gotoxy1(0, 8);

	now = before = time(0); //초 단위 시간을 구함
	localtime_s(&nt, &now); //지역 시각을 구함
	callender();
	DrawTime(nt.tm_hour, nt.tm_min, nt.tm_sec);//현재 시각을 출력

	while (kbhit() == 0)
	{
		now = time(0);//초단위 시간을 구함
		if (now != before)//다르면
		{
			callender();
			before = now;//현재 초단위 시간을 기억
			localtime_s(&nt, &now);//지역 시각을 구함
			DrawTime(nt.tm_hour, nt.tm_min, nt.tm_sec);//현재 시각을 출력
		}
	}
}
void main()
{
	system("mode con cols=110 lines=30");
	now_time();
}