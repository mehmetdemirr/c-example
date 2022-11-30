#include<stdio.h>
#define BOYUT 100
#include<string.h>
int main(void)
{
	char cumle[BOYUT],karakter;
	int i,uzunluk,toplam=0;
	printf("Lutfen not giriniz:");
	gets(cumle);
	uzunluk =strlen(cumle);
	printf("Hangi karekterin sayisini istiyorsunuz?\nCevabiniz:");
	scanf("%c",&karakter);
	for (i = 0; i < uzunluk; i++)
	{
		if (karakter == cumle[i])
			toplam++;
	}
	printf("Girdiginiz notda %d tane '%c' karakteri vardir.",toplam,karakter);
	return;
}
