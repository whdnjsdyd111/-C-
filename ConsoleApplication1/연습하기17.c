#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//���� ����

int main()
{
	/*�ܾ�� �迭 �ʱ�ȭ*/
	char width1[] = "strong";
	char width2[] = "bravo";
	char width3[] = "lean";
	char width4[] = "try";
	char width5[] = "bee";
	char width6[] = "decide";
	char height1[] = "novel";
	char height2[] = "globe";
	char height3[] = "brute";
	char height4[] = "red";
	char height5[] = "finale";

	/* ���� �迭 ������ - �� ǥ�� */
	char puzzle[8][8];

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			puzzle[i][j] = '-';
		}
	}

	/* �ش��ϴ� ���� ���ĺ� �ʱ�ȭ */
	puzzle[0][0] = 's';
	puzzle[0][4] = 'n';
	puzzle[0][5] = 'g';
	puzzle[2][1] = 'b';
	puzzle[2][7] = 'f';
	puzzle[4][4] = 'l';
	puzzle[5][1] = 't';
	puzzle[5][2] = 'r';
	puzzle[6][0] = 'b';
	puzzle[7][2] = 'd';

	/* ���� �����ֱ� */
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			printf("%c ", puzzle[i][j]);
		}
		putchar('\n');
	}

	int direction;
	int wordNumber;
	char word[10];
	
	while (1){
		/* ��Ʈ �����ֱ� */
		putchar('\n');
		puts("--------������Ʈ--------");
		puts("1.����");
		puts("2.ȯȣ�� ��ź��");
		puts("3.����");
		puts("4.����ϴ�");
		puts("5.��");
		puts("6.�����ϴ�");
		putchar('\n');
		puts("--------������Ʈ---------");
		puts("1.�Ҽ�");
		puts("2.������, ������");
		puts("3.����, �߸�����");
		puts("4.����");
		puts("5.������ �κ�, �ǳ���");
		putchar('\n');

		/* ��Ʈ�� ���� ����, ��ȣ ���� */
		printf("1.���� 2.���� �� ����: "); scanf("%d", &direction);
		printf("���� �ܾ��� ��ȣ: "); scanf("%d", &wordNumber);

		switch (direction){ // switch ���� �̿�
		case 1: // ���θ� ���� ���� ��
			switch (wordNumber){ 
			case 1:{ // ���θ� �����ϰ� 1���� ���� ���� ��
					   printf("�ܾ� �Է�: "); scanf("%s", word); // 1���� �ش��ϴ� �ܾ� ���߱�

					   if (!strcmp(word, width1)){ // �� ���ڿ��� �����ϸ� 0�� ��ȯ�ϹǷ� ! �� true�� ��ȯ�ϵ���

						   puts("�¾ҽ��ϴ�!!! \n");
						   strcpy(puzzle[0], word); // �� ���ڿ��� �¾Ҵٸ� puzzle�� �������ֱ�

						   for (int i = 0; i < 8; i++){ // ä���� ���� �����ֱ�
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{ // Ʋ�ȴٸ� �Ѿ��
						   puts("Ʋ�Ƚ��ϴ�!!!");
						   break;
					   }
			}
			case 2:{
					   printf("�ܾ� �Է�: "); scanf("%s", word); // 1���� ����
					   if (!strcmp(word, width2)){

						   puts("�¾ҽ��ϴ�!!!");

						   char word1[] = "-bravo-f"; // �迭�� Ư���� ������ ���縦 ���� 
						   // bravo�� �״�� �����ϸ� - b r a v o - f �� �ƴ� b r a v o �� �ǹǷ�
						   // ������ - b r a v o - f ���ڿ��� �ʱ�ȭ�Ͽ� �������ش�
						   strcpy(puzzle[2], word1);

						   for (int i = 0; i < 8; i++){
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{
						   puts("Ʋ�Ƚ��ϴ�!!!");
						   break;
					   }
			}
			case 3:{ // 2���� ����
					   printf("�ܾ� �Է�: "); scanf("%s", word);
					   if (!strcmp(word, width3)){

						   puts("�¾ҽ��ϴ�!!!");
						   char word1[] = "----lean"; // -bravo-f�� �����ϰ�
						   strcpy(puzzle[4], word1);

						   for (int i = 0; i < 8; i++){
							   for (int j = 0; j < 8; j++){
								   printf("%c ", puzzle[i][j]);
							   }
							   putchar('\n');
						   }
						   break;
					   }
					   else{
						   puts("Ʋ�Ƚ��ϴ�!!!");
						   break;
					   }
			}
			case 4:{

			}
			case 5:{

			}
			case 6:{

			}

			}
		case 2: // ���� ���� ��
			switch (wordNumber){ // �迭�� ���ڿ��� ���η� ����� ���ϴ� ���ں��� ���� ����� �ҵ�.. �밡��

			}
		}
	}
}