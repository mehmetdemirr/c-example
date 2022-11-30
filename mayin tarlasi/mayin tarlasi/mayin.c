#include<stdio.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define BOYUT 10
#define MAX 100
void sekil(void)
{
	int i, j;
	printf("\n    ");
	for (i = 0; i <10; i++)
		printf("%d ", i);
	printf("\n    ");
	for (i = 1; i <= 10; i++)
		printf("%c ", 25);
	printf("\n");
	for (i =0 ; i <10; i++)
	{ 
		printf("%d %c ", i,26);
		for (j = 0; j <10; j++)
			printf("%c ",2);
		printf("\n");
	}
}
void main(void)
{
	srand(time(NULL));
	int bomba[BOYUT][BOYUT]={1}, i, j,secim, t = 0,sayac=0,satir,sutun;
	printf("MAYIN TARLASI OYUNUNA HOS GELDiNiZ\n\n");  Tekrar:
	printf("1-Kolay\n2-Orta\n3-Zor\n");
	printf("Lutfen bir seviye seciniz:");
	scanf("%d",&secim);
	switch (secim)
	{
	case 1:
		printf("Oyun Seviyesi=>Kolay\n");
		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
			{
				if (t != 10)
				{
					bomba[i][j] = rand() % 5;
					if (bomba[i][j] == 0)
						t++;
				}
			}
		printf("%d", t);
		break;
	case 2:
		printf("Oyun Seviyesi=>Orta\n");
		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
			{
				if (t != 25)
				{
					bomba[i][j] = rand() % 3;
					if (bomba[i][j] == 0)
						t++;
				}
			}
		printf("%d", t);
		break;
	case 3:
		printf("Oyun Seviyesi=>Zor\n");
		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
			{
				if (t != 40)
				{
					bomba[i][j] = rand() % 2;
					if (bomba[i][j] == 0)
						t++;
				}
			}
	printf("%d", t);
	break;
	default:
		printf("Hatali tuslama yaptiniz.\nTekrar denemek icin 1'i tuslayiniz:");
		scanf("%d", &secim);
		if (secim == 1)
			goto Tekrar;
		else
			printf("Kardesim ne mal ciktin ya:)");
	}
	sekil();
	printf("NOT:Lutfen satir ve sutun numarasini sirasiyla giriniz.\n\n");
	while (sayac!=5)
	{
		printf("Lutfen secmek istediginiz karenin koordinatlarini giriniz:");
		scanf("%d %d", &satir, &sutun);
		if (bomba[satir][sutun] == 0)
		{
			printf("\n\t\tYOU ARE LOSER");
			break;
		}
		sayac++;
	}
	if (sayac == 5)
	{
		printf("\n\t\tYOU ARE WINNER");
	}
}