#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct table{
	int personNumber; // �ο���
	char personName[100]; // ������ �̸�
} Table;

int FindEmptySeat(Table table[]); // ���ڸ��� �ִ��� �Ǻ��ϴ� �Լ�
void Print(Table table[]); // ���� ���� ���
Table Reservation(Table table[], int tableNumber, int number); // �����ϱ�

int main()
{
	Table table[20]; // 20���� ���̺�

	for (int i = 0; i < 20; i++){
		table[i].personNumber = 0; // ��� 0�� NULL�� �ʱ�ȭ
		table[i].personName[0] = NULL;
	}

	while (1){
		
		if (FindEmptySeat(table) == 1) { // ���ڸ��� ���Ҵ��� �Ǻ�
			printf("���̻� ���ڸ��� �����ϴ�. \n"); // ���ڸ��� ���� 1�� ��ȯ�ϸ�
			printf("---------- ���� �Ϸ� ---------- \n");
			break; // ���ѹݺ��� Ż���ϱ�
		}

		int number;
		printf("�ο� ��: ");
		scanf("%d", &number);
		int booking = 0; // ���� �ߴ��� �Ǻ�

		switch (number){

		case 1:{ // switch ������ �ο��� 1������ ������ 1�μ��� ������ �ڵ����� 2�μ����� �Ѿ�����ϱ� ���� �����
				   for (int i = 10; i < 13; i++){
					   if (table[i].personNumber == 0){ // ���࿡ ���� �ȵ��ִ� �ڸ����
						   Reservation(table, i, number); // �����ϱ�
						   if (i == 12) // �����Ѱ� ������ 1�μ��̸�
							   booking--; // ��ŷ 1 ���� �׷��� ������ 2�μ����� �Ѿ��
						   break; // �׸��� for�� ���������� (���ڸ��� �����ؾ��ϴϱ�)
					   }
				   }
				   booking++; // ������ ������ �� ���¸� 1
				   if (table[12].personNumber != 0 && table[12].personName != NULL) // ���� 1�μ��� ������ ���� ���ߴٸ� 2�μ����� �Ѿ��
					   booking++; // ��ŷ�� 2�� ���� 2�μ����� ����
		}
		case 2:{
				   if (booking == 1) // ������ ������ ���¸� switch�� ����������
					   break;
				   booking = 0; // ��ŷ�� 0���� �ʱ�ȭ
				   for (int i = 5; i < 10; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 9)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[9].personNumber != 0 && table[9].personName != NULL)
					   booking++;

		}
		case 3:
		case 4:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 0; i < 5; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 4)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[4].personNumber != 0 && table[4].personName != NULL)
					   booking++;
		}
		case 5:
		case 6:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 13; i < 18; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 17)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[17].personNumber != 0 && table[17].personName != NULL)
					   booking++;
		}
		case 7:
		case 8:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 18; i < 20; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   break;
					   }
				   }
		}
		}
		Print(table);
		
	}
	return 0;
}

int FindEmptySeat(Table table[]) // ���ڸ��� �ִ��� �Ǻ��ϴ� �Լ�
{
	for (int i = 0; i < 20; i++){
		if (table[i].personNumber == 0){ // ���ڸ��� �ִٸ� �Լ� ������
			return 0;
		}
	}
	return 1; // ���ڸ��� ���ٸ� 1 ��ȯ
}

void Print(Table table[])
{
	for (int i = 0; i < 20; i++){
		if (table[i].personNumber == 0){
			printf("%d�� ���̺�: ������� \n", i+1);
		}
		else {
			printf("%d�� ���̺�: %s, %d�� ����� \n", i+1, table[i].personName, table[i].personNumber);
		}
	}
}

Table Reservation(Table table[], int tableNumber, int number)
{
	table[tableNumber].personNumber = number;
	printf("������ �̸�: ");
	scanf("%s", table[tableNumber].personName);
	return *table;
}