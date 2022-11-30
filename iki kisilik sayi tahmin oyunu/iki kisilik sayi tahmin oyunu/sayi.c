#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int s1, s2,sayi;
char oyuncu1[25], oyuncu2[25];
int tahminetme();
int dogrumu(int s);
void main(void)
{
	srand(time(NULL));
	sayi = rand() % 1000 + 1;
	printf("iki kisilik sayi tahmin oynuna hos geldiniz.\n");
	printf("Ben bir sayi tuttum.Bilebilir misin:)\n");
	printf("Birinci oyuncunun adini giriniz:");
	scanf("%s",oyuncu1);
	printf("ikinci oyuncunun adini giriniz:");
	scanf("%s", oyuncu2);
	while (tahminetme() != 3)
		tahminetme();
}
int tahminetme()
{
	int a;
	printf("Oyuncu1 %s:", oyuncu1);
	scanf("%d", &s1);
	a=dogrumu(s1,oyuncu1);
	printf("Oyuncu2 %s:", oyuncu2);
	scanf("%d", &s2);
	a = dogrumu(s2,oyuncu2);
	if (a == 3)
		return a;
	return;
}
int dogrumu(int s,char a[])
{
	if (sayi > s)
	{
		printf("Girdiginiz sayi kucuktur.\n");
		return 1;
	}
	else if (sayi < s)
	{
		printf("Girdiginiz sayi buyuktur.\n");
		return 2;
	}
	else
	{
		printf("Tebrikler.Dogru tahmin.\nOyunu %s kazandi.",a);
		return 3;
	}
}