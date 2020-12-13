#include <stdio.h>
#include <string.h>
//구조체를 사용하여 이름, 주민등록번호, 급여정보를 받아 출력하기

struct employee
{
	char name[20];
	char registNum[20];
	int pay;
};

int main()
{
	struct employee man;
	
	printf("종업원 이름: "), scanf_s("%s", man.name, sizeof(man.name));
	printf("주민등록번호: "), scanf_s("%s", man.registNum, sizeof(man.registNum));
	printf("급여정보: "), scanf_s("%d", &man.pay);
	printf("\n정보 \n\n");
	printf("종업원 이름: %s \n", man.name);
	printf("주민등록번호: %s \n", man.registNum);
	printf("급여정보: %d \n\n", man.pay);

	return 0;
}