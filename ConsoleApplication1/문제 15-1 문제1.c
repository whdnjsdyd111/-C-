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

void ShowAllData(const int *arr, int len) // const를 선언한 이유는 작성자가 arr 배열에 저장된 값을 바꾸지 않겠다는 의도
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

}

int main()
{

}

