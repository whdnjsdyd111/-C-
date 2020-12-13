#include <stdio.h>
// 섭씨는 화씨, 화씨는 섭씨온도로 바꿔 변환하여 출력하는 함수

int CelToFah(int num);
int FahToCel(int num);

int main(void)
{
	int n;
	printf("선택지 \n1.섭씨온도 \n2.화씨온도 \n번호를 입력하여 선택하십시오.");
	scanf_s("%d", &n);

	printf("온도를 입력하십시오.");
	double num;
	scanf_s("%lf", &num);

	switch (n)
	{
	case 1:
		CelToFah(num);
		break;
	case 2:
		FahToCel(num);
		break;
	}
	return 0;
}

int CelToFah(int num)
{
	double Fah = 1.8*num + 32;
	printf("화씨온도:%lf \n", Fah);
}

int FahToCel(int num)
{
	double Cel = (num - 32) / 1.8;
	printf("섭씨온도:%f \n", Cel);
}