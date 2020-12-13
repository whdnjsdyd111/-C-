#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 정수를 계속 입력받아 -1을 받으면 멈추고 지금까지의 정수를 순서대로 출력
// 정수를 몇개를 받을 지 모르는 상태이므로 길이 5인 int 형 메모리 할당하고 다 채워지면 메모리 더하기
// ★ 어째선지 할당한 메모리 량보다 더 많이 입력해도 모두 출력됨.. ★

int main(void)
{
	int *num = (int*)malloc(sizeof(int)* 5);
	int i = 1;
	while (1){
		if (i >= 5 && i % 3 == 2){ // 5 8 11
			num = (int*)realloc(num, sizeof(int)* (i + 3));
			if (num == NULL){
				puts("메모리 늘리기 실패!");
				return -1;
			}
		}
		printf("%d번째 정수 입력: ", i);
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