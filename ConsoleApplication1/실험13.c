#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("C:\\fp.txt", "wt");
	fputs("hey boy~", fp);
	fclose(fp);
	fp = fopen("C:\\fp.txt", "rt");
	while (1){
		char str;
		str = fgetc(fp);
		if (str == EOF)
			break;
		printf("%c", str);
	}
	return 0;
}