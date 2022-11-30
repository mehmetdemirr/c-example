#include<stdio.h>
int hizbul(int zaman)
{
	int hiz,ilkhiz,ivme;
	if (zaman <= 15)
	{
		ivme = 32; ilkhiz = 0;
		hiz = ilkhiz + ivme * zaman;
	}
	else if (zaman > 15 && zaman < 35)
	{
		hiz = 480;
	}
	else if (zaman >= 35 && zaman <= 50)
	{
		ilkhiz = 480; ivme = -32;
		hiz = ilkhiz + ivme * (zaman-35);
	}
	else
	{
		hiz = 0;
	}
	return hiz;
}
int main()
{
	int zaman;
	printf("Lutfen ucagin t zamandaki hizini gormek icin t'yi giriniz:");
	scanf_s("%d", &zaman);
	printf("%d dakikada ucagin hizi:%d",zaman, hizbul(zaman));
	
	return;
}

