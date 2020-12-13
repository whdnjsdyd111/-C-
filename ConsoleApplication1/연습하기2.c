#include <stdio.h>

int main()
{
	printf("주사위 2개를 던졌을 때 합이 6이 되는 경우 \n");

	int arr2[2][6] = {
		{ 1, 2, 3, 4, 5, 6 },
		{ 1, 2, 3, 4, 5, 6 }
	}; // 눈의 수가 6개인 주사위 2개를 표현

	/*
	arr[0][0] + arr[1][0]
	arr[0][0] + arr[1][1] 
	arr[0][0] + arr[1][2] .....
	arr[0][1] + arr[1][0]
	arr[0][1] + arr[1][1] .....

	이런식으로 합이 6이 되는 것을 찾음
	*/
	int total2 = 0; // 총 경우의 수

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr2[0][i] + arr2[1][j] == 6)
			{
				printf("(%d, %d) \n", arr2[0][i], arr2[1][j]);
				total2 += 1;
			}
		}
	}
	printf("총 경우의 수: %d개 \n\n", total2);

	printf("주사위 3개를 던졌을 때 합이 10이 되는 경우 \n");

	int arr3[3][6] = {
		{ 1, 2, 3, 4, 5, 6 },
		{ 1, 2, 3, 4 ,5, 6 },
		{ 1, 2, 3, 4, 5, 6 }
	}; // 마찬가지로 주사위 3개를 표현한 배열
	int total3 = 0;

	for (int k = 0; k < 6; k++)
	{
		for (int n = 0; n < 6; n++)
		{
			for (int m = 0; m < 6; m++)
			{
				if (arr3[0][k] + arr3[1][n] + arr3[2][m] == 10)
				{
					printf("(%d, %d, %d) \n", arr3[0][k], arr3[1][n], arr3[2][m]);
					total3 += 1;
				}
			}
		}
	}
	printf("총 경우의 수 %d개 \n", total3);

	return 0;
}