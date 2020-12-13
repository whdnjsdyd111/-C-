#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 구조체 변수로 바이너리파일 입출력하기

typedef struct friend
{
	char name[20];
	char sex;
	int age;
} Friend;

int main()
{
	FILE *fp;
	Friend myfren1;
	Friend myfren2;

	fp = fopen("C:\\Myfren.bin", "wb");
	printf("이름, 성별, 나이 순으로 입력: ");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	fp = fopen("C:\\Myfren.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return 0;
}