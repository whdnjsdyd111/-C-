#include <stdio.h>
#include <string.h>
//����ü�� ����Ͽ� �̸�, �ֹε�Ϲ�ȣ, �޿������� �޾� ����ϱ�

struct employee
{
	char name[20];
	char registNum[20];
	int pay;
};

int main()
{
	struct employee man;
	
	printf("������ �̸�: "), scanf_s("%s", man.name, sizeof(man.name));
	printf("�ֹε�Ϲ�ȣ: "), scanf_s("%s", man.registNum, sizeof(man.registNum));
	printf("�޿�����: "), scanf_s("%d", &man.pay);
	printf("\n���� \n\n");
	printf("������ �̸�: %s \n", man.name);
	printf("�ֹε�Ϲ�ȣ: %s \n", man.registNum);
	printf("�޿�����: %d \n\n", man.pay);

	return 0;
}