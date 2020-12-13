#include <stdio.h>
// 길이가 10인 배열에 정수를 입력하고 입력 받은 숫자 중 홀수부터 채우고 짝수를 채워나가도록 순서 저장

int main()
{
	int arr[10];
	printf("총 10개의 숫자 입력 \n");
	for (int i = 0; i < 10; i++){
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}
	
	int arrr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // arr배열을 새로이 저장할 배열 선언

	for (int j = 0; j < 10; j++){ // arr 배열 첨부터 끝까지 숫자를 비교
		if (arr[j] % 2 == 1){ // 홀수일시
			for (int x = 0; x < 10; x++){ //arrr의 첨부터 끝까지의 숫자를 보고 
				if (arrr[x] == 0){ // 저장이 안된 공간이면 arr을 저장
					arrr[x] = arr[j]; // 이렇게 하면 arrr 배열중 이미 저장된 숫자는 건너뛰고 저장안된 공간에 저장
					break; // 공간을 찾아 숫자를 저장하면 반복문 탈출
				}
			}
		}

		if (arr[j] % 2 == 0){ // 마찬가지 짝수일 경우
			for (int y = 9; y > 0; y--){ // 배열의 끝에서 부터 비교를 시작
				if (arrr[y] == 0){ // 저장된 공간인지 아닌지 판별
					arrr[y] = arr[j]; // 아무런 저장이 안되있을 시 값을 저장
					break; // 그리고 반복문 탈출
				}
			}
		}
	}

	printf("배열의 요소 출력:");
	for (int z = 0; z < 10; z++)
		printf("%d ", arrr[z]);

	return 0;
}