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

void ShowAllData(const int *arr, int len) // const�� ������ ������ �ۼ��ڰ� arr �迭�� ����� ���� �ٲ��� �ʰڴٴ� �ǵ�
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

}

int main()
{

}

