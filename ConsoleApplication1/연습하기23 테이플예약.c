#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct table{
	int personNumber; // 인원수
	char personName[100]; // 예약자 이름
} Table;

int FindEmptySeat(Table table[]); // 빈자리가 있는지 판별하는 함수
void Print(Table table[]); // 예약 정보 출력
Table Reservation(Table table[], int tableNumber, int number); // 예약하기

int main()
{
	Table table[20]; // 20개의 테이블

	for (int i = 0; i < 20; i++){
		table[i].personNumber = 0; // 모두 0과 NULL로 초기화
		table[i].personName[0] = NULL;
	}

	while (1){
		
		if (FindEmptySeat(table) == 1) { // 빈자리가 남았는지 판별
			printf("더이상 빈자리가 없습니다. \n"); // 빈자리가 없어 1을 반환하면
			printf("---------- 예약 완료 ---------- \n");
			break; // 무한반복문 탈출하기
		}

		int number;
		printf("인원 수: ");
		scanf("%d", &number);
		int booking = 0; // 예약 했는지 판별

		switch (number){

		case 1:{ // switch 문으로 인원수 1명으로 했을때 1인석이 다차면 자동으로 2인석으로 넘어가도록하기 위해 사용함
				   for (int i = 10; i < 13; i++){
					   if (table[i].personNumber == 0){ // 만약에 예약 안되있는 자리라면
						   Reservation(table, i, number); // 예약하기
						   if (i == 12) // 예약한게 마지막 1인석이면
							   booking--; // 부킹 1 빼기 그렇지 않으면 2인석으로 넘어가짐
						   break; // 그리고 for문 빠져나오기 (한자리만 예약해야하니까)
					   }
				   }
				   booking++; // 위에서 예약을 한 상태면 1
				   if (table[12].personNumber != 0 && table[12].personName != NULL) // 만약 1인석이 다차서 예약 못했다면 2인석으로 넘어가기
					   booking++; // 부킹을 2로 만들어서 2인석에서 예약
		}
		case 2:{
				   if (booking == 1) // 위에서 예약한 상태면 switch문 빠져나오기
					   break;
				   booking = 0; // 부킹을 0으로 초기화
				   for (int i = 5; i < 10; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 9)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[9].personNumber != 0 && table[9].personName != NULL)
					   booking++;

		}
		case 3:
		case 4:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 0; i < 5; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 4)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[4].personNumber != 0 && table[4].personName != NULL)
					   booking++;
		}
		case 5:
		case 6:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 13; i < 18; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   if (i == 17)
							   booking--;
						   break;
					   }
				   }
				   booking++;
				   if (table[17].personNumber != 0 && table[17].personName != NULL)
					   booking++;
		}
		case 7:
		case 8:{
				   if (booking == 1)
					   break;
				   booking = 0;
				   for (int i = 18; i < 20; i++){
					   if (table[i].personNumber == 0){
						   Reservation(table, i, number);
						   break;
					   }
				   }
		}
		}
		Print(table);
		
	}
	return 0;
}

int FindEmptySeat(Table table[]) // 빈자리가 있는지 판별하는 함수
{
	for (int i = 0; i < 20; i++){
		if (table[i].personNumber == 0){ // 빈자리가 있다면 함수 끝내기
			return 0;
		}
	}
	return 1; // 빈자리가 없다면 1 반환
}

void Print(Table table[])
{
	for (int i = 0; i < 20; i++){
		if (table[i].personNumber == 0){
			printf("%d번 테이블: 비어있음 \n", i+1);
		}
		else {
			printf("%d번 테이블: %s, %d명 예약됨 \n", i+1, table[i].personName, table[i].personNumber);
		}
	}
}

Table Reservation(Table table[], int tableNumber, int number)
{
	table[tableNumber].personNumber = number;
	printf("예약자 이름: ");
	scanf("%s", table[tableNumber].personName);
	return *table;
}