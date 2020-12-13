#include <stdio.h>
// 1��+2��+...+n���� ����Լ�

int RecursiveFunction(int n); //����Լ� ����

int main()
{
	int array[3][5]; //3�� 5���� ���� �迭�� ����
	int n = 1;

	for (int i = 0; i < 3; i++) // �� �迭�� ������ �����ϰ� ����ϴ� �Լ�
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = RecursiveFunction(n);
			printf("n = %d -> array[%d][%d] = %d \n", n, i, j, array[i][j]);
			n++;
		}
	}
	printf("\n");
	int num; // ���
	printf("Ž���ϰ� ���� ����� �Է��Ͻÿ�.");
	scanf_s("%d", &num);

	int total = 0; //ã���� �ϴ� ����� ����

	for (int k = 0; k < 3; k++) // �� �Լ����� ���� ã���� �ϴ� ����� ��ġ�� ������ ã�� �Լ�
	{
		for (int l = 0; l < 5; l++)
		{
			if (array[k][l] % num == 0)
			{
				printf("%d�� %d���� �߰߉����� �� ���� %d \n", k, l, array[k][l]);
				total += 1;
			}
		}
	}
	
	if (total == 0) // ����� ������ ���� �޼��� ���
		printf("\n���ϴ� ����� �����ϴ�! \n");
	else
		printf("\n���ǿ� �´� ���� �� ����: %d \n", total);

	return 0;
}

int RecursiveFunction(int n) //����Լ�
{
	int total = 0;
	for (int i = 1; i <= n; i++)
		total += i*i*i;
	return total;
}