#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 복소수의 덧셈과 곱셈을 위한 함수를 구조체로 정의하자
// 덧셈 = ( a + c ) + ( b + d ) * i
// 곱셈 = ac - bd + bci + adi

typedef struct ComplexNumber
{
	double num1, num2;
	double num3, num4;
} CN;

CN complexnumber(void)
{
	CN cn;
	printf("복소수 입력1[실수, 허수]: ");
	scanf("%lf %lf", &cn.num1, &cn.num2);
	printf("복소수 입력2[실수, 허수]: ");
	scanf("%lf %lf", &cn.num3, &cn.num4);
	return cn;
}

void Add(CN cn)
{
	double AddNumber = cn.num1 + cn.num3;
	double AddImaginaryNumber = cn.num2 + cn.num4;
	printf("합의 결과] 실수: %f, 허수: %f \n", AddNumber, AddImaginaryNumber);
}

void Multiply(CN cn)
{
	double MultiplyNumber = (cn.num1*cn.num3) - (cn.num2*cn.num4);
	double MultiplyImaginaryNumber = (cn.num2*cn.num3) + (cn.num1*cn.num4);
	printf("곱의 결과] 실수: %f, 허수: %f \n", MultiplyNumber, MultiplyImaginaryNumber);
}
int main()
{
	CN cn = complexnumber();
	Add(cn);
	Multiply(cn);

	return 0;
}