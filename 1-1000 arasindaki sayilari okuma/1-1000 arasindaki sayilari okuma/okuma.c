#include<stdio.h>
#define BOYUT 10
int main()
{
	int sayi, basamak[BOYUT],i=0,csayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	csayi = sayi;
	while (sayi != 0)
	{
		basamak[i++] = sayi % 10;
		sayi /= 10;
	}
	printf("Girdiginiz sayinin basamak sayisi:%d\n", i);
	printf("\n%d sayisinin yaziyla okunusu:",csayi);
	switch (basamak[2])
	{
	case 1:printf("Yuz "); break;
	case 2:printf("iki yuz "); break;
	case 3:printf("uc yuz "); break;
	case 4:printf("dort yuz "); break;
	case 5:printf("bes yuz "); break;
	case 6:printf("alti yuz "); break;
	case 7:printf("yedi yuz "); break;
	case 8:printf("sekiz yuz "); break;
	case 9:printf("dokuz yuz "); break;
	}
	switch (basamak[1])
	{
	case 1:printf("on "); break;
	case 2:printf("yirmi "); break;
	case 3:printf("otuz "); break;
	case 4:printf("kirk "); break;
	case 5:printf("elli "); break;
	case 6:printf("altmis "); break;
	case 7:printf("yetmis "); break;
	case 8:printf("seksen "); break;
	case 9:printf("doksan "); break;
	}

	switch (basamak[0])
	{
	case 1:printf("bir "); break;
	case 2:printf("iki "); break;
	case 3:printf("uc "); break;
	case 4:printf("dort "); break;
	case 5:printf("bes "); break;
	case 6:printf("alti "); break;
	case 7:printf("yedi "); break;
	case 8:printf("sekiz "); break;
	case 9:printf("dokuz "); break;
	}
	printf("\n\n\n");
	return;
}