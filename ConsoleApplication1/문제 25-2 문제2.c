#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ������ ��� �Է¹޾� -1�� ������ ���߰� ���ݱ����� ������ ������� ���
// ������ ��� ���� �� �𸣴� �����̹Ƿ� ���� 5�� int �� �޸� �Ҵ��ϰ� �� ä������ �޸� ���ϱ�
// �� ��°���� �Ҵ��� �޸� ������ �� ���� �Է��ص� ��� ��µ�.. ��

int main(void)
{
	int *num = (int*)malloc(sizeof(int)* 5);
	int i = 1;
	while (1){
		if (i >= 5 && i % 3 == 2){ // 5 8 11
			num = (int*)realloc(num, sizeof(int)* (i + 3));
			if (num == NULL){
				puts("�޸� �ø��� ����!");
				return -1;
			}
		}
		printf("%d��° ���� �Է�: ", i);
		scanf("%d", &num[i - 1]);
		if (num[i - 1] == -1){
			break;
		}
		i++;
	}
	
	for (int j = 0; j < i - 1; j++)
		printf("%d ", num[j]);
	printf("\n");
	free(num);
	return 0;
}