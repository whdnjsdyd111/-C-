#include <stdio.h>
// 컴파일을 실행하고 종료되는 순간 까지의 스택의 상태변화에대 설명

void func2(int n)
{
	int num3 = n + 1;
}

void func1(int n)
{
	int num2 = n + 1;
	func2(num2);
}

int main(void)
{
	int num1 = 20;
	func1(num1);
	return 0;
}

/* stack 영역 */

/* 생성 과정 */
/*먼저 main 함수의 지역변수 num1 = 20 이 생성
그 다음 func1의 n = 20 매개변수가 생성되고 지역변수 num2 = n + 1 = 21 이 생성
그 다음 fun2의 매개변수 n 이 생성 된후 지역변수 num3 = n + 1 = 22 가 생성. */

/* 소멸 과정 */
/*
먼저 fun2의 지역변수, 매개변수인 n, num3이 소멸,
그 다음 fun1의 지역변수, 매개변수인 n, num2이 소멸,
그 다음 main 함수의 지역변수인 num1 이 소멸되고 종료
*/