#include <stdio.h>
//5���� ������ �޾� ���� ����. ��� 0������ ���� ������ �ٽ� �Է��ؾ��ϴ� �Լ�

int main(void)
{
	int i = 0, num = 0, result = 0;
	printf("5���� ������ �Է��Ͻÿ�. \n");

	while (i < 5)
	{
		scanf_s("%d", &num);

		while (num <= 0)
		{
			printf("�ٽ� �Է��Ͻÿ�. \n");
			scanf_s("%d", &num);
		}
		result += num;
		i++;
	}
	printf("���: %d", result);
	return 0;
}