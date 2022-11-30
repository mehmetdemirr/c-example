#include<stdio.h>
#include<string.h>
#include"ctype.h"
void main()
{
	char cumle[150];
	int bosluk=0, rakam=0, harf=0, diger=0,deger,i,toplam=0;
	printf("Lutfen bir cumle giriniz:");
	gets(cumle);
	deger =  strlen(cumle);
	for (i = 0; i < deger; i++)
	{
		if (isdigit(cumle[i]))
			rakam++;
		if (isalpha(cumle[i]))
			harf++;
		if (ispunct(cumle[i]))
			diger++;
		if (isprint(cumle[i]))
			toplam++;
	}
	printf("\nCumledeki harf sayisi:%d",harf );
	printf("\nCumledeki rakam sayisi:%d",rakam);
	printf("\nCumledeki bosluk sayisi:%d",toplam-rakam-harf-diger);
	printf("\nCumledeki rakam,harf ve bosluk haricindeki karakter sayisi:%d",diger);
	printf("\nCumledeki toplam karakter sayisi:%d",toplam);
}