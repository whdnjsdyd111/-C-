#include <stdio.h>
//��������, ���������� ����� ���� ������ �̿��� ���������� ����ϴ� �Լ�

void BubbleSort(int ary[], int len);

int main(void)
{
	printf("7���� ���ڸ� �Է��Ͻÿ�. \n");
	int ary[7];
	for (int i = 0; i < 7; i++){
		printf("�Է�: ");
		scanf_s("%d", &ary[i]);
	}
	BubbleSort(ary, sizeof(ary) / sizeof(int));

	for (int j = 0; j < 7; j++)
		printf("%d ", ary[j]);

	return 0;
}

void BubbleSort(int ary[], int len)
{
	int i, j, temp;

	for (i = 0; i < len - 1; i++){ // ���� ������ �迭 �������� �ϳ� ����ŭ ����
		for (j = 0; j < (len - i) - 1; j++){ // ù��°�� �ι�° ���� ��ü, �ι�°�� ����° ���� ��ü
			if (ary[j] < ary[j + 1]){
				temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
			}
		}
	}
}