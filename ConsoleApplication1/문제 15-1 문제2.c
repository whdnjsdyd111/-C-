#include <stdio.h>
/*
const int *ptr = &num; �ÿ� ptr �� ����Ű�� ������ ����� ���� ���� ����
*ptr = 30; ������ ����!
num = 40; ������ ����!

int const *ptr = &num1 �ÿ� ptr �� ����� �ּҰ��� ���� ����
ptr = &num2; ������ ����!
*ptr = 40; ������ ����!

const int const *ptr = &num; �ÿ� �׳� �� �ȉ�.
*ptr = 20; ������ ����!
ptr=&num2; ������ ����!
*/

//���� �Ҹ��� ������ ���
void ShowData(const int *ptr)
{
	int *rptr = ptr; // �� �������� ���� ptr�� rptr�� ���� ����� ���� ������ �� �ִ� ��Ȳ�̵Ǿ� const ������ ���ǹ��ϰ� �� ���̴�.
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