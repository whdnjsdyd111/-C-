#include <stdio.h>
//������ �޾� �� ����ŭ�� ���ڸ� �޾� ���� ���ϴ� �Լ�

int main(void)
{
	printf("�� ���� ������ �Է� �Ұ��ΰ�?");
	int i, result=0;
	scanf_s("%d", &i);

	printf("�� ������ŭ ������ �Է��Ͻÿ�. \n");
	while (i > 0)
	{
		int num;
		scanf_s("%d", &num);
		result += num;
		i--;
	}
	printf("���:%d \n", result);
	return 0;
}