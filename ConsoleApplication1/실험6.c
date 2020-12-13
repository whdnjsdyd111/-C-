#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실험5 에서 생성된 파일을 읽어들어 출력하기

int main()
{
	char name[20];
	char sex;
	int age;

	FILE *fp = fopen("C:\\Friend.txt", "rt");
	int ret;

	while (1){
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("이름, 성별, 나이: %s, %c, %d \n", name, sex, age);
	}

	fclose(fp);
	return 0;
}