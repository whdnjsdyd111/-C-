#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 22-1 ������ employee ������� ���� 3�� �迭�� ������ �޾� ����ϱ�

struct employee
{
	char name[20];
	char registnum[20];
	int pay;
};

int main()
{
	struct employee arr[3];

	for (int i = 0; i < 3; i++){
		printf("%d��° ��� ������ �̸�: ", i + 1), scanf("%s", arr[i].name);
		printf("%d��° ��� �ֹε�Ϲ�ȣ: ", i + 1), scanf("%s", arr[i].registnum);
		printf("%d��° ��� �޿�����: ", i + 1), scanf("%d", &arr[i].pay);
		printf("\n");
	}

	for (int j = 0; j < 3; j++){
		printf("%d��° ��� ������ �̸�: %s \n", j + 1, arr[j].name);
		printf("%d��° ��� �ֹε�Ϲ�ȣ: %s \n", j + 1, arr[j].registnum);
		printf("%d��° ��� �޿�����: %d \n", j + 1, arr[j].pay);
		printf("\n");
	}
	return 0;
}