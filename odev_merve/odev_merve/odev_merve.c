#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BOYUT 20
void terscevir(char dizi1[],char dizi2[]);
void diziyazdir(char dizim[]);
void secim(char dizi[], char dizim[]);
void main()
{
	char sayi1[BOYUT],sayi2[BOYUT],s1[BOYUT], s2[BOYUT];
	int i = 0;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%s", sayi1);
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%s", sayi2);
	secim(sayi1, sayi2);
}
void terscevir(char dizi[],char yeni1[])
{
	int i=0,uzunluk;
	uzunluk = strlen(dizi);
	for (;uzunluk>=0;uzunluk--)
	{
		yeni1[i] = dizi[uzunluk];
		i++;
	}
}
void diziyazdir(char dizi[])
{
	int uzunluk = strlen(dizi);
	for (uzunluk; uzunluk >= 0; uzunluk--)
	{
		printf("%c", dizi[uzunluk]);
	}
}
void secim(char sayi1[],char sayi2[])
{
	int deger;
	printf("\nLutfen yapacaginiz islemi seciniz:\n");
	printf("Toplama icin:1\n");
	printf("Cikarma icin:2\n");
	printf("Carpma icin:3\n");
	printf("Lutfen yapacaginiz islemi seciniz:");
	scanf("%d",&deger);
	int u1 = strlen(sayi1), u2 = strlen(sayi2);
	int m1, m2;
	m1 = atol(sayi1);
	m2 = atol(sayi2);
	switch (deger)
	{
	case 1:
		printf("Toplam=%d", m1 + m2);
		break;
	case 2:
		printf("Cikartma=%d", m1 - m2);
		break;
	case 3:
		printf("Carpma=%d", m1 * m2);
		break;
	default:
		printf("Lutfen gecerli bir secim yapiniz!");
	}
}