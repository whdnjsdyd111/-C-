#include <stdio.h>
//»ç¿ëÀÚ·ÎºÎÅÍ µÎ Á¤¼ö¸¦ ¹Ş¾Æ »¬¼À°ú °ö¼ÀÀ» ±¸ÇÏ´Â ÇÔ¼ö

int main(void)
{
	int num1, num2;

	printf("»¬¼À°ú °ö¼ÀÀ» ±¸ÇÒ µÎ Á¤¼ö¸¦ ÀÔ·Â:");
	scanf_s("%d %d", &num1, &num2);
	printf("»¬¼À:%d, °ö¼À:%d \n", num1 - num2, num1*num2);
	
	return 0;
}