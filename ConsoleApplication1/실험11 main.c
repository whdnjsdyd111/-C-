#include <stdio.h>
// 3���� ������ ���� �� extern �Լ��� ȣ���Ͽ� �簳
// static �Լ��� ���� ����� �ٸ� ���Ͽ����� ȣ�� ����. (�Լ����� static ���� ����)

extern void Increment(void);
extern int num;

int main()
{
	printf("%d ", num);
	Increment();
	printf("%d ", num);
	return 0;
}