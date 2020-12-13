#include <stdio.h>
/*
const int *ptr = &num; 시에 ptr 이 가리키는 변수에 저장된 값을 변경 못함
*ptr = 30; 컴파일 에러!
num = 40; 컴파일 성공!

int const *ptr = &num1 시에 ptr 에 저장된 주소값을 변경 못함
ptr = &num2; 컴파일 에러!
*ptr = 40; 컴파일 성공!

const int const *ptr = &num; 시에 그냥 다 안됌.
*ptr = 20; 컴파일 에러!
ptr=&num2; 컴파일 에러!
*/

//지적 할만한 사항을 얘기
void ShowData(const int *ptr)
{
	int *rptr = ptr; // 이 선언으로 인해 ptr은 rptr로 인해 저장된 값을 변경할 수 있는 상황이되어 const 선언은 무의미하게 된 것이다.
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main()
{
	int num = 10;
	int *ptr = &num;
	ShowData(ptr);
	return 0;
}