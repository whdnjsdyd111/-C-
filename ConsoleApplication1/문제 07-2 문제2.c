#include <stdio.h>
/* *
   o*
   oo*
   ooo*
   oooo* �� ��µǴ� �Լ� */

int main(void)
{
	int i = 0, j = 4;

	while (i < 5)
	{
		while (j < 4)
		{
			printf("o");
			j++;
		}
		printf("* \n");
		i++;
		j -= i;
	}
	return 0;
}