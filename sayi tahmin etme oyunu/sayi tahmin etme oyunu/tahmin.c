#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int sayi,tahmin,tahmin_s=0;
	//char karakter;
	devam:
	sayi = 1 + rand() % 100;
	//printf("\n%d", sayi);
	printf("\n\n1-1000 arasinda bir sayi tuttum.\nTahmin edebilir misin?\n");
	printf("Lutfen ilk tahmini gir:");
	scanf_s("%d", &tahmin);
	tahmin_s++;
	tekrar:
	if (tahmin == sayi)
	{
		printf("Mukemmel.Bildiniz!");
		printf("\n%d. tahminde buldunuz.", tahmin_s);
		if (tahmin_s < 10)
			printf("\nSiz sirri biliyorsunuz ya da sanlisiniz.");
		else if (tahmin_s == 10)
			printf("\nAha!Siz sirri biliyorsunuz.");
		else
			printf("\nDaha iyisini yapabilirsiniz.");
		goto devam;
		/*rintf("\n\nTekrar oynamak ister misin?(E/H)\nCevap:");
		scanf_s("%c",&karakter);
		if('E' == karakter)
		{
			
		}
		else
		{
			printf("\nOyundan cikmak icin bir tusa basiniz.");
		}
		*/
	}
	else if (tahmin < sayi)
	{
		while (tahmin<sayi)
		{
			printf("Cok kucuk.Tekrar deneyiniz\nTahmininiz:");
			scanf_s("%d", &tahmin);
			tahmin_s++;
		}
		goto tekrar;
	}
	else if (tahmin > sayi)
	{
		while (tahmin > sayi)
		{
			printf("Cok buyuk.Tekrar deneyiniz.\nTahmininiz:");
			scanf_s("%d", &tahmin);
			tahmin_s++;
		}
		goto tekrar;
	}
	return;
}