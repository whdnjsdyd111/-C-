#include <stdio.h>
//오름차순, 내림차순의 방법인 버블 정렬을 이용해 내림차순을 출력하는 함수

void BubbleSort(int ary[], int len);

int main(void)
{
	printf("7개의 숫자를 입력하시오. \n");
	int ary[7];
	for (int i = 0; i < 7; i++){
		printf("입력: ");
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

	for (i = 0; i < len - 1; i++){ // 버블 정렬은 배열 갯수에서 하나 뺀만큼 실행
		for (j = 0; j < (len - i) - 1; j++){ // 첫번째와 두번째 비교후 교체, 두번째와 세번째 비교후 교체
			if (ary[j] < ary[j + 1]){
				temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
			}
		}
	}
}