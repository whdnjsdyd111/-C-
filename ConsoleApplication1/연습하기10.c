#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main()
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); //버퍼에 있는 잔 데이터를 없애줌
	fflush(stdin); // 이걸로 입력버퍼를 비워줘도 가능

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s\n", perID);
	printf("이름: %s\n", name);

	return 0;
}