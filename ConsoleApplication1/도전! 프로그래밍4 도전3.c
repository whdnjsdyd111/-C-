#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���Ҽ��� ������ ������ ���� �Լ��� ����ü�� ��������
// ���� = ( a + c ) + ( b + d ) * i
// ���� = ac - bd + bci + adi

typedef struct ComplexNumber
{
	double num1, num2;
	double num3, num4;
} CN;

CN complexnumber(void)
{
	CN cn;
	printf("���Ҽ� �Է�1[�Ǽ�, ���]: ");
	scanf("%lf %lf", &cn.num1, &cn.num2);
	printf("���Ҽ� �Է�2[�Ǽ�, ���]: ");
	scanf("%lf %lf", &cn.num3, &cn.num4);
	return cn;
}

void Add(CN cn)
{
	double AddNumber = cn.num1 + cn.num3;
	double AddImaginaryNumber = cn.num2 + cn.num4;
	printf("���� ���] �Ǽ�: %f, ���: %f \n", AddNumber, AddImaginaryNumber);
}

void Multiply(CN cn)
{
	double MultiplyNumber = (cn.num1*cn.num3) - (cn.num2*cn.num4);
	double MultiplyImaginaryNumber = (cn.num2*cn.num3) + (cn.num1*cn.num4);
	printf("���� ���] �Ǽ�: %f, ���: %f \n", MultiplyNumber, MultiplyImaginaryNumber);
}
int main()
{
	CN cn = complexnumber();
	Add(cn);
	Multiply(cn);

	return 0;
}