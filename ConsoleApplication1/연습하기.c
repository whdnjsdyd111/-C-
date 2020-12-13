#include <stdio.h>
// 1³+2³+...+n³인 재귀함수

int RecursiveFunction(int n); //재귀함수 선언

int main()
{
	int array[3][5]; //3행 5열을 갖는 배열을 선언
	int n = 1;

	for (int i = 0; i < 3; i++) // 각 배열의 값들을 저장하고 출력하는 함수
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = RecursiveFunction(n);
			printf("n = %d -> array[%d][%d] = %d \n", n, i, j, array[i][j]);
			n++;
		}
	}
	printf("\n");
	int num; // 배수
	printf("탐색하고 싶은 배수를 입력하시오.");
	scanf_s("%d", &num);

	int total = 0; //찾고자 하는 배수의 갯수

	for (int k = 0; k < 3; k++) // 각 함수들의 값을 찾고자 하는 배수로 위치와 갯수를 찾는 함수
	{
		for (int l = 0; l < 5; l++)
		{
			if (array[k][l] % num == 0)
			{
				printf("%d행 %d열에 발견됬으며 그 값은 %d \n", k, l, array[k][l]);
				total += 1;
			}
		}
	}
	
	if (total == 0) // 배수의 갯수에 따라 메세지 출력
		printf("\n원하는 배수가 없습니다! \n");
	else
		printf("\n조건에 맞는 수의 총 개수: %d \n", total);

	return 0;
}

int RecursiveFunction(int n) //재귀함수
{
	int total = 0;
	for (int i = 1; i <= n; i++)
		total += i*i*i;
	return total;
}