#include <stdio.h>
#include <stdlib.h>
// 99������ ������ ���� 5���� ���

int main()
{
	for (int i = 0; i < 5; i++)
		printf("%d ", rand() % 100); // % �����ڴ� �������� ����ϹǷ� 99������ �ڿ����� �����Ե�

	return 0;
}