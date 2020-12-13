#include <stdio.h>

#define PI 3.14
#define AREA(A) ((A)*(A)*PI)
// 원주율 PI와 원의 넓이 AREA를 매크로 상수로 정의하기

int main()
{
	double rad;
	printf("원의 반지름: ");
	scanf_s("%lf", &rad);

	printf("원의 넓이: %.2f \n", AREA(rad));
	return 0;
}