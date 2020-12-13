#include <stdio.h>
// 3개로 파일을 분할 후 extern 함수로 호출하여 재개
// static 함수로 변수 선언시 다른 파일에서는 호출 못함. (함수에도 static 선언 가능)

extern void Increment(void);
extern int num;

int main()
{
	printf("%d ", num);
	Increment();
	printf("%d ", num);
	return 0;
}