#include <stdio.h>
// ������ ȭ��, ȭ���� �����µ��� �ٲ� ��ȯ�Ͽ� ����ϴ� �Լ�

int CelToFah(int num);
int FahToCel(int num);

int main(void)
{
	int n;
	printf("������ \n1.�����µ� \n2.ȭ���µ� \n��ȣ�� �Է��Ͽ� �����Ͻʽÿ�.");
	scanf_s("%d", &n);

	printf("�µ��� �Է��Ͻʽÿ�.");
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
	printf("ȭ���µ�:%lf \n", Fah);
}

int FahToCel(int num)
{
	double Cel = (num - 32) / 1.8;
	printf("�����µ�:%f \n", Cel);
}