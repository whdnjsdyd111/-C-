#include <stdio.h>
//11A + 11Z = 99 �϶� A�� Z�� ���ϴ� �Լ�

int main(void)
{
	for (int A = 1; A < 10; A++)
	{
		for (int Z = 1; Z < 10; Z++)
		{
			if (11 * A + 11 * Z == 99)
				printf("A=%d �϶� Z=%d \n", A, Z);
		}
	}
	return 0;
}