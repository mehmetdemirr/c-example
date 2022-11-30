#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	srand(time(NULL));
	time_t zaman;
	zaman = time(NULL);
	int gun,ay,yil;
	printf("gg-aa-yy seklinde dogum tarihinizi giriniz:");
	scanf("%d%*c%d%*c%d",&gun,&ay,&yil);
	//printf("gun=%d\nay=%d\nyil=%d", gun, ay, yil);
	if (ay > 0 || ay < 13)
	{
		printf("%d ", gun);
		switch (ay)
		{
		case 1:printf("Ocak"); break;
		case 2:printf("Subat"); break;
		case 3:printf("Mart"); break;
		case 4:printf("Nisan"); break;
		case 5:printf("Mayis"); break;
		case 6:printf("Haziran"); break;
		case 7:printf("Temmuz"); break;
		case 8:printf("Agustos"); break;
		case 9:printf("Eylul"); break;
		case 10:printf("Ekim"); break;
		case 11:printf("Kasim"); break;
		case 12:printf("Aralik"); break;
		default:printf("Hatali bir ay giridiniz!"); return;
		}
		printf(" %d ", yil);
	}
	else
		printf("Hatali tarih girdiniz!");
	printf("\n%s",ctime(&zaman));
	printf("\n%s", __TIME__);
	return;
}