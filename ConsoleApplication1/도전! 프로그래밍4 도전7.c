#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ��ȭ��ȣ ���� ���α׷� �ۼ�
// �� �̹��� ���Ͽ� �����͸� �����ϰ� �ٽ� ����� ������ �о���̱�

/*
    �⺻������ ����� �ϴ� ���
    �Է� -      �̸��� ��ȭ��ȣ�� �Է�
    ���� -      �̸��� �Է��Ͽ� �ش� �̸��� ���� ����
    �˻� -      �̸��� �Է��Ͽ� �ش� �̸��� ���� ���
    ��ü ��� -  ����� ��� �̸��� ��ȭ��ȣ ���
*/

/*
    ���� �߰������� ���� ���
	����, �˻� ��ɿ� ã���� �ϴ� ������ ��� ������ ���� ������ ���ٰ� �Ǻ�
	���� ����� �� ������ �����ϴ� ���� �ƴ� �����ϴ� ��� �̸� ����
	���� ����� �� ���� ���� �� �ش��ϴ� �迭 ��ü�� ���ֱ� ��) ---------- ������ ----------
	                                                       �̸�: jo ��ȣ: 01068480083
	                                                       �̸�: hong ��ȣ: 01025090083 ---> ������
														   �̸�: king ��ȣ: 01035368888

														   ---------- ��� ----------
														   �̸�: jo ��ȣ: 01068480083
														   �̸�: king ��ȣ: 01025090083
	����ڰ� �󸶳� ������ ������ �� �𸣴� �޸𸮸� ���� �Ҵ��Ͽ� ���� �� �޸𸮰� �� ä������ �޸� �ø���
*/

typedef struct Information
{
	char name[20]; // �̸�
	char phoneNumber[20]; // ��ȭ��ȣ
} Infor;

int main()
{
	
	FILE *fp = fopen("C:\\��ȭ��ȣ ��.txt", "rt"); // ���Ͽ� �ִ� ������ �޾� ���̱����� 
	if (fp == NULL){
		fp = fopen("C:\\��ȭ��ȣ ��.txt", "wt"); // ù �����̶� ���� ������ ���ٸ� ���� �������ֱ�
		if (fp == NULL){
			puts("���� ���� ����!!");
			return -1;
		}
	}

	int informationNumber = 0; // ���� ����

	Infor *infor;
	infor = (char*)malloc(5);

	while (1){ // �ؽ�Ʈ�� ����� ������ ��������
		int ret;

		if (informationNumber % 5 == 0){
			infor = (char*)realloc(infor, informationNumber + 5); // ������ ������ �޸𸮿� �� ä��� 5���� �÷��ֱ�
		}
		ret = fscanf(fp, "%s %s", infor[informationNumber].name, infor[informationNumber].phoneNumber);
		
		if (ret == EOF)
			break;
		informationNumber += 1;
	}
	fclose(fp);

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
		getchar();
		printf("\n");

		if (menu == 1){
			if (informationNumber % 5 == 0){
				infor = (char*)realloc(infor, informationNumber + 5); // ������ ������ �޸𸮿� �� ä��� 5���� �÷��ֱ�
			}

			puts("[�Է�]");
			printf("�̸� �Է�: ");
			gets(infor[informationNumber].name);
			fflush(stdin);
			printf("��ȭ��ȣ �Է�: ");
			gets(infor[informationNumber].phoneNumber);
			fflush(stdin);
			printf("\n");

			informationNumber += 1; // ���� �Է� �� ���� ���� 1 �����ֱ�
		}
		else if (menu == 2){
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
						infor[i].name[0] = '\0', infor[i].phoneNumber[0] = '\0'; // ��� �� �����ֱ�
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
		else if (menu == 3){
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
		else if (menu == 4){
			if (informationNumber == 0){
				puts("�ƹ��� ������ �����ϴ�. \n");
			}
			else{
				for (int i = 0; i < informationNumber; i++){
					printf("�̸�: %s ��ȣ: %s \n\n", infor[i].name, infor[i].phoneNumber);
				}
			}
		}
		else if (menu == 5){
			puts("[����] \n���α׷��� �����մϴ�. \n");
			break;
		}
		else
			puts("�޴��� �ٽ� �����Ͻÿ�. \n");
	}

	FILE * fp1 = fopen("C:\\��ȭ��ȣ ��.txt", "wt");
	if (fp1 == NULL){
		puts("���� ���� ����!!");
		return -1;
	}

	for (int i = 0; i < informationNumber; i++){
		fputs(infor[i].name, fp1); putc('\n', fp1);
		fputs(infor[i].phoneNumber, fp1); putc('\n', fp1);
	}
		
	fclose(fp1);

	free(infor);
	return 0;
}