#include <stdio.h>
/* *
   o*
   oo*
   ooo*
   oooo* 가 출력되는 함수 */

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