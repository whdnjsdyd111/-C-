#include <stdio.h>
// n�� �Է¹޾� 2�� n���� ���ϴ� �Լ� (����Լ��� �̿�)

int Two(int num);
int n = 1;

int main(void)
{
	printf("2�� n ���� ���� n�� �Է� �Ͻÿ�.");
	int num;
	scanf_s("%d", &num);
	Two(num);
	printf("���: %d \n", n);
	return 0;
}

int Two(int num)
{
	if (num == 0)
	{
		return n;
	}
	n *= 2;
	Two(num - 1);
}