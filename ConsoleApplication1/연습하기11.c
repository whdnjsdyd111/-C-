#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �ýú� ��� ��� ���α׷�

int main()
{
	double fast; // �ü�
	double distance; // �Ÿ�
	int pay = 3000; // ���, �ϴ� �⺻ ����̷� ����
	double extraCharge; // �߰����
	int extCh = 1; // ����
	printf("�ü�(����)�� �Է�: "), scanf("%lf", &fast);
	printf("�Ÿ�(�Ǽ�)�� �Է�: "), scanf("%lf", &distance);

	double hour = distance / fast; // �ð� = �Ÿ� / �ӵ�

	if (hour < 1)
		printf("�ɸ� �ð�: %.1f�� \n", hour * 60); // �ð��� 1���� ������ ������ ������ֱ�
	else
		printf("�ɸ� �ð�: %.1f�ð� \n", hour);

	if (distance < 2)
		printf("���: %d�� \n", pay);
	else{
		if (fast < 15)
			extraCharge = (((distance - 2) / fast) * 3600) / 35 * 100;
		else
			extraCharge = ((distance * 1000 - 2000) / 142) * 100;
		/* �߰������ 142m ���� 100���� �߰��� �ȴٰ� �Ѵ�.
		�Է¹��� Ű�μ��� ����ȭ�ؼ� 2000m�� ���ְ� 142�� ���� �� 100���� ������ */
	}
	if (distance > 50){
		printf("����� �ٸ� �������� �̵��߽��ϴ�. \n20%�߰���� �߻�\n");
		extCh = 1.2;
	}
	printf("���: %.1f�� \n", (pay + extraCharge)*extCh);
	return 0;
}