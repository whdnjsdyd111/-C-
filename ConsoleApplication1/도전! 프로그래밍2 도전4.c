#include <stdio.h>
// ȸ��(������, �ڷ� �г� ���̰� ���� �ܾ�)�� �����ϴ� �Լ� ��) ���˺�, 101, level

void Palindrome(char str[]);

int main()
{
	printf("���ܾ �Է��Ͻÿ�. ");
	char str[100];
	scanf_s("%s", str, sizeof(str));

	Palindrome(str);
	return 0;
}

void Palindrome(char str[])
{
	int len = 0;
	while (str[len] != '\0') // �ܾ��� ���̸� ���ϴ� �ݺ���
		len++;

	for (int i = 0; i < len; i++){
		if (str[i] != str[len - 1 - i]){ // ù��° ��ҿ� ������, �ι�°�� ������ �ι�°... �� ����
			printf("�� �ܾ�� ȸ���� �ƴմϴ�. \n");
			return; // ȸ���� �ƴϸ� �Լ� ����
		}
	}
	printf("�� �ܾ�� ȸ���Դϴ�. \n"); // �Ǻ��� �ٳ����� ������ �ݺ����� ������ ȸ��
}