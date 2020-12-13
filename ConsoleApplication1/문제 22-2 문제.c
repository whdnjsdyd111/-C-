#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 22-1 문제의 employee 기반으로 길이 3인 배열로 정보를 받아 출력하기

struct employee
{
	char name[20];
	char registnum[20];
	int pay;
};

int main()
{
	struct employee arr[3];

	for (int i = 0; i < 3; i++){
		printf("%d번째 사람 종업원 이름: ", i + 1), scanf("%s", arr[i].name);
		printf("%d번째 사람 주민등록번호: ", i + 1), scanf("%s", arr[i].registnum);
		printf("%d번째 사람 급여정보: ", i + 1), scanf("%d", &arr[i].pay);
		printf("\n");
	}

	for (int j = 0; j < 3; j++){
		printf("%d번째 사람 종업원 이름: %s \n", j + 1, arr[j].name);
		printf("%d번째 사람 주민등록번호: %s \n", j + 1, arr[j].registnum);
		printf("%d번째 사람 급여정보: %d \n", j + 1, arr[j].pay);
		printf("\n");
	}
	return 0;
}