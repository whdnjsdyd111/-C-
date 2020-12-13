#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 전화번호 관리 프로그램 작성
// 단 이번엔 파일에 데이터를 저장하고 다시 실행시 데이터 읽어들이기

/*
    기본적으로 갖춰야 하는 기능
    입력 -      이름과 전화번호의 입력
    삭제 -      이름을 입력하여 해당 이름의 정보 삭제
    검색 -      이름을 입력하여 해당 이름의 정보 출력
    전체 출력 -  저장된 모든 이름과 전화번호 출력
*/

/*
    내가 추가적으로 더한 요소
	삭제, 검색 기능에 찾고자 하는 정보를 모든 정보에 비교후 없으면 없다고 판별
	삭제 기능은 한 정보만 삭제하는 것이 아닌 동일하는 모든 이름 삭제
	삭제 기능은 한 정보 삭제 시 해당하는 배열 자체를 없애기 예) ---------- 실행전 ----------
	                                                       이름: jo 번호: 01068480083
	                                                       이름: hong 번호: 01025090083 ---> 삭제시
														   이름: king 번호: 01035368888

														   ---------- 결과 ----------
														   이름: jo 번호: 01068480083
														   이름: king 번호: 01025090083
	사용자가 얼마나 정보를 저장할 지 모르니 메모리를 동적 할당하여 저장 후 메모리가 다 채워지면 메모리 늘리기
*/

typedef struct Information
{
	char name[20]; // 이름
	char phoneNumber[20]; // 전화번호
} Infor;

int main()
{
	
	FILE *fp = fopen("C:\\전화번호 부.txt", "rt"); // 파일에 있는 정보를 받아 들이기위해 
	if (fp == NULL){
		fp = fopen("C:\\전화번호 부.txt", "wt"); // 첫 실행이라 읽을 파일이 없다면 파일 생성해주기
		if (fp == NULL){
			puts("파일 오픈 실패!!");
			return -1;
		}
	}

	int informationNumber = 0; // 정보 개수

	Infor *infor;
	infor = (char*)malloc(5);

	while (1){ // 텍스트에 저장된 정보들 가져오기
		int ret;

		if (informationNumber % 5 == 0){
			infor = (char*)realloc(infor, informationNumber + 5); // 정보의 개수가 메모리에 다 채우면 5개씩 늘려주기
		}
		ret = fscanf(fp, "%s %s", infor[informationNumber].name, infor[informationNumber].phoneNumber);
		
		if (ret == EOF)
			break;
		informationNumber += 1;
	}
	fclose(fp);

	while (1){
		puts("***** MENU ***** \n");
		puts("1. 입력");
		puts("2. 삭제");
		puts("3. 검색");
		puts("4. 전체출력");
		puts("5. 종료");
		printf("메뉴를 선택: ");
		int menu;
		scanf("%d", &menu);
		getchar();
		printf("\n");

		if (menu == 1){
			if (informationNumber % 5 == 0){
				infor = (char*)realloc(infor, informationNumber + 5); // 정보의 개수가 메모리에 다 채우면 5개씩 늘려주기
			}

			puts("[입력]");
			printf("이름 입력: ");
			gets(infor[informationNumber].name);
			fflush(stdin);
			printf("전화번호 입력: ");
			gets(infor[informationNumber].phoneNumber);
			fflush(stdin);
			printf("\n");

			informationNumber += 1; // 정보 입력 후 정보 개수 1 더해주기
		}
		else if (menu == 2){
			puts("[삭제]");
			char str[20];
			printf("이름 입력: ");
			gets(str);
			fflush(stdin);

			int i = 0; // infor 을 0 부터 이름이 같은걸 찾기
			int search = 0; //찾은 정보 개수
			while (1){
				for (int j = 0; j >= 0; j++){
					if (str[0] == 0)
						break;
					if (str[j] != infor[i].name[j]) // 같지 않다면 바로 반복문 탈출
						break;
					if (str[j] == '\0' && infor[i].name[j] == '\0'){ // 끝까지 같다면
						puts("\n- 삭제 할 정보 -");
						printf("이름: %s 번호: %s \n\n", infor[i].name, infor[i].phoneNumber); // 삭제 할 정보를 출력 
						infor[i].name[0] = '\0', infor[i].phoneNumber[0] = '\0'; // 출력 후 없애주기
						search += 1; // 삭제한 개수 1 더해주기
						break;
					}
				}

				for (int k = 0; k < informationNumber; k++){
					if (infor[k].name[0] == '\0'){ // 삭제된 배열 찾기
						infor[k].name[strlen(infor[k + 1].name)] = '\0'; // 삭제된 배열의 길이를 저장할 다음요소 배열길이만큼 늘이기
						infor[k].phoneNumber[strlen(infor[k + 1].phoneNumber)] = '\0';

						for (int z = 0; z < strlen(infor[k + 1].name); z++) // 삭제된 배열에 그다음 배열을 저장
							infor[k].name[z] = infor[k + 1].name[z];
						for (int x = 0; x < strlen(infor[k + 1].phoneNumber); x++)
							infor[k].phoneNumber[x] = infor[k + 1].phoneNumber[x];
						infor[k + 1].phoneNumber[0] = '\0'; // 옮겨진 배열 없애주기
						infor[k + 1].name[0] = '\0';

					}
				}

				if (i == informationNumber){ // infor을 0부터 찾아 정보 개수까지 다 찾았으면 반복문 탈출
					if (search == 0){ // infor을 끝까지 찾았는데 없으면 찾는게 없다고 출력
						puts("찾으시는 정보가 없습니다. \n");
					}
					break;
				}
				i++;
			}
			informationNumber -= search; // 삭제한 개수만큼 정보 개수 빼기
		}
		else if (menu == 3){
			puts("[검색]");
			char str[20];
			printf("이름 입력: ");
			gets(str);
			fflush(stdin);

			int i = 0; // infor 을 0 부터 이름이 같은걸 찾기
			int search = 0; //찾은 정보 개수
			while (1){
				for (int j = 0; j >= 0; j++){
					if (str[0] == 0) // 검색 때 엔터키만 눌렀다면 바로 반목문 탈출
						break;
					if (str[j] != infor[i].name[j]) // 같지 않다면 바로 반복문 탈출
						break;
					if (str[j] == '\0' && infor[i].name[j] == '\0'){ // 끝까지 같다면 정보 출력후 탈출
						puts("\n- 찾은 정보 -");
						printf("이름: %s 번호: %s \n\n", infor[i].name, infor[i].phoneNumber);
						search += 1; // 찾은 개수 1 더해주기
						break;
					}
				}
				if (i == informationNumber){ // infor을 0부터 찾아 정보 개수까지 다 찾았으면 반복문 탈출
					if (search == 0){ // infor을 끝까지 찾았는데 없으면 찾는게 없다고 출력
						puts("찾으시는 정보가 없습니다. \n");
					}
					break;
				}
				i++;
			}
		}
		else if (menu == 4){
			if (informationNumber == 0){
				puts("아무런 정보가 없습니다. \n");
			}
			else{
				for (int i = 0; i < informationNumber; i++){
					printf("이름: %s 번호: %s \n\n", infor[i].name, infor[i].phoneNumber);
				}
			}
		}
		else if (menu == 5){
			puts("[종료] \n프로그램을 종료합니다. \n");
			break;
		}
		else
			puts("메뉴를 다시 선택하시오. \n");
	}

	FILE * fp1 = fopen("C:\\전화번호 부.txt", "wt");
	if (fp1 == NULL){
		puts("파일 오픈 실패!!");
		return -1;
	}

	for (int i = 0; i < informationNumber; i++){
		fputs(infor[i].name, fp1); putc('\n', fp1);
		fputs(infor[i].phoneNumber, fp1); putc('\n', fp1);
	}
		
	fclose(fp1);

	free(infor);
	return 0;
}