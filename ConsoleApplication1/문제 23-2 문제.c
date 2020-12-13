#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// µÎ ÁÂÇ¥¸¦ ¹Þ¾Æ Á÷»ç°¢ÇüÀÇ ³ÐÀÌ¿Í ³× °³ÀÇ ÁÂÇ¥¸¦ Ãâ·ÂÇÏ´Â ÇÔ¼ö

typedef struct point
{
	int xpos; // xÁÂÇ¥
	int ypos; // yÁÂÇ¥
} Point;

typedef struct rectangle
{
	Point ru; // ¿ì»ó´Ü ÁÂÇ¥
	Point ld; // ÁÂÇÏ´Ü ÁÂÇ¥
} Rectangle;

void Area(Rectangle *ptr)
{
	int area = (ptr->ru.xpos - ptr->ld.xpos)*(ptr->ru.ypos - ptr->ld.ypos); // Á÷»ç°¢Çü ³ÐÀÌ ±¸ÇÏ±â
	printf("\n³ÐÀÌ: %d \n\n", area);
}

void FourPoint(Rectangle *ptr) // ³× °³ÀÇ ÁÂÇ¥ Ãâ·ÂÇÏ´Â ÇÔ¼ö
{
	printf("³× °³ÀÇ ÁÂÇ¥ \n\n");

	printf("ÁÂÇÏ´ÜÀÇ ÁÂÇ¥: %d %d \n", ptr->ld.xpos, ptr->ld.ypos);
	printf("ÁÂ»ó´ÜÀÇ ÁÂÇ¥: %d %d \n", ptr->ld.xpos, ptr->ru.ypos);
	printf("¿ì»ó´ÜÀÇ ÁÂÇ¥: %d %d \n", ptr->ru.xpos, ptr->ru.ypos);
	printf("¿ìÇÏ´ÜÀÇ ÁÂÇ¥: %d %d \n\n", ptr->ru.xpos, ptr->ld.ypos);
}

Rectangle ReceivePoint(void) // ÁÂÇ¥ ¹Þ´Â ÇÔ¼ö
{
	Rectangle ptr;
	printf("µÎ °³ÀÇ ÁÂÇ¥¸¦ ÀÔ·Â ÇÏ½Ã¿À. \n\n");
	printf("¿ì»ó´ÜÀÇ ÁÂÇ¥ \n");
	scanf("%d %d", &ptr.ru.xpos, &ptr.ru.ypos);
	printf("ÁÂÇÏ´ÜÀÇ ÁÂÇ¥ \n");
	scanf("%d %d", &ptr.ld.xpos, &ptr.ld.ypos);
	return ptr;

}

int main()
{
	Rectangle ptr = ReceivePoint();
	Area(&ptr);
	FourPoint(&ptr);

	return 0;
}