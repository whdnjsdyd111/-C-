#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ��ȭ��ȣ ���� ���α׷� �ۼ�

/*
   �⺻������ ����� �ϴ� ���
   �Է� -      �̸��� ��ȭ��ȣ�� �Է�
   ���� -      �̸��� �Է��Ͽ� �ش� �̸��� ���� ����
   �˻� -      �̸��� �Է��Ͽ� �ش� �̸��� ���� ���
   ��ü ��� -  ����� ��� �̸��� ��ȭ��ȣ ���
*/

typedef struct Information
{
	char name[20]; // �̸�
	char phoneNumber[20]; // ��ȭ��ȣ
} Infor;

Infor *infor;

Infor InformationStorage(void);
void InformationDelete(void);
void InformationSearch(void);
void InformationAllPrint(Infor *infor);
int informationNumber = 0; // ���� ����

int main()
{
	infor = (char*)calloc(5, 20);

	while (1){
		puts("***** MENU ***** \n");
		puts("1. �Է�");
		puts("2. ����");
		puts("3. �˻�");
		puts("4. ��ü���");
		puts("5. ����");
		printf("�޴��� ����: ");
		int menu;
		scanf("%d", &menu);
		printf("\n");
		fflush(stdin);

		if (menu == 1)
			InformationStorage();
		else if (menu == 2)
			InformationDelete();
		else if (menu == 3)
			InformationSearch();
		else if (menu == 4)
			InformationAllPrint(infor);
		else if (menu == 5){
			puts("[����] \n���α׷��� �����մϴ�. \n");
			break;
		}
		else
			puts("�޴��� �ٽ� �����Ͻÿ�. \n");
	}
	free(infor);
	return 0;
}

Infor InformationStorage(void)
{
	if (informationNumber % 5 == 0){
		infor = (char*)realloc(infor, informationNumber + 5); // ������ ������ �޸𸮿� �� ä��� 5���� �÷��ֱ�
	}
	fflush(stdin); // ����Ű ���ֱ�
	puts("[�Է�]");
	printf("�̸� �Է�: ");
	gets(infor[informationNumber].name);
	fflush(stdin);
	printf("��ȭ��ȣ �Է�: ");
	gets(infor[informationNumber].phoneNumber);
	fflush(stdin);
	printf("\n");

	informationNumber += 1; // ���� �Է� �� ���� ���� 1 �����ֱ�
	return *infor;
}

void InformationDelete(void)
{
	fflush(stdin);
	puts("[����]");
	char str[20];
	printf("�̸� �Է�: ");
	gets(str);
	fflush(stdin);

	int i = 0; // infor �� 0 ���� �̸��� ������ ã��
	int search = 0; //ã�� ���� ����
	while (1){
		for (int j = 0; j >= 0; j++){
			if (str[0] == 0)
				break;
			if (str[j] != infor[i].name[j]) // ���� �ʴٸ� �ٷ� �ݺ��� Ż��
				break;
			if (str[j] == '\0' && infor[i].name[j] == '\0'){ // ������ ���ٸ�
				puts("\n- ���� �� ���� -");
				printf("�̸�: %s ��ȣ: %s \n\n", infor[i].name, infor[i].phoneNumber); // ���� �� ������ ��� 
				infor[i].name[0] = '\0' , infor[i].phoneNumber[0] = '\0'; // ��� �� �����ֱ�
				search += 1; // ������ ���� 1 �����ֱ�
				break;
			}
		}
		for (int k = 0; k < informationNumber; k++){
			if (infor[k].name[0] == '\0'){ // ������ �迭 ã��
				infor[k].name[strlen(infor[k + 1].name)] = '\0'; // ������ �迭�� ���̸� ������ ������� �迭���̸�ŭ ���̱�
				infor[k].phoneNumber[strlen(infor[k + 1].phoneNumber)] = '\0';

				for (int z = 0; z < strlen(infor[k + 1].name); z++) // ������ �迭�� �״��� �迭�� ����
					infor[k].name[z] = infor[k + 1].name[z];
				for (int x = 0; x < strlen(infor[k + 1].phoneNumber); x++)
					infor[k].phoneNumber[x] = infor[k + 1].phoneNumber[x];
				infor[k + 1].phoneNumber[0] = '\0'; // �Ű��� �迭 �����ֱ�
				infor[k + 1].name[0] = '\0';
			}
		}

		if (i == informationNumber){ // infor�� 0���� ã�� ���� �������� �� ã������ �ݺ��� Ż��
			if (search == 0){ // infor�� ������ ã�Ҵµ� ������ ã�°� ���ٰ� ���
				puts("ã���ô� ������ �����ϴ�. \n");
			}
			break;
		}
		i++;
	}
	informationNumber -= search; // ������ ������ŭ ���� ���� ����
}

void InformationSearch(void)
{
	fflush(stdin);
	puts("[�˻�]");
	char str[20];
	printf("�̸� �Է�: ");
	gets(str);
	fflush(stdin);

	int i = 0; // infor �� 0 ���� �̸��� ������ ã��
	int search = 0; //ã�� ���� ����
	while (1){
		for (int j = 0; j >= 0; j++){
			if (str[0] == 0) // �˻� �� ����Ű�� �����ٸ� �ٷ� �ݸ� Ż��
				break;
			if (str[j] != infor[i].name[j]) // ���� �ʴٸ� �ٷ� �ݺ��� Ż��
				break;
			if (str[j] == '\0' && infor[i].name[j] == '\0'){ // ������ ���ٸ� ���� ����� Ż��
				puts("\n- ã�� ���� -");
				printf("�̸�: %s ��ȣ: %s \n\n", infor[i].name, infor[i].phoneNumber);
				search += 1; // ã�� ���� 1 �����ֱ�
				break;
			}
		}
		if (i == informationNumber){ // infor�� 0���� ã�� ���� �������� �� ã������ �ݺ��� Ż��
			if (search == 0){ // infor�� ������ ã�Ҵµ� ������ ã�°� ���ٰ� ���
				puts("ã���ô� ������ �����ϴ�. \n");
			}
			break;
		}
		i++;
	}
}

void InformationAllPrint(Infor *infor)
{
	if (informationNumber == 0){
		puts("�ƹ��� ������ �����ϴ�. \n");
		return;
	}

	for (int i = 0; i < informationNumber; i++){
		printf("�̸�: %s ��ȣ: %s \n\n", infor[i].name, infor[i].phoneNumber);
	}
	return;
}