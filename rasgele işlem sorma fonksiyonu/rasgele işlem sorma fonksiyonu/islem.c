#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*void islem(int sayi1, int sayi2)
{
	char islem;
	float sonuc;
	//printf("1-Toplama\n2-Cikartma\n3-Carpma\n4-Bolme\n5-Mod alma");
	islem = 1 + rand() % 4;
	switch (islem)
	{
	case 1: sonuc = sayi1 + sayi2; printf("\n%d + %d",sayi1,sayi2); break;
	case 2: sonuc = sayi1 - sayi2; printf("\n%d - %d", sayi1, sayi2); break;
	case 3: sonuc = sayi1 * sayi2; printf("\n%d * %d", sayi1, sayi2); break;
	case 4: sonuc = (float)sayi1 / (float)sayi2; printf("\n%d / %d", sayi1, sayi2); break;
	//case 5: sonuc = sayi1 %sayi2; printf("\n%d \% %d", sayi1, sayi2); break;
	}
	printf(" kactir?\nCevabiniz:");
}
void dogrumu(int cevabiniz)
{   
	int dogru,yanlis,sonuc;
	dogru = 1 + rand() % 4;
	yanlis = 1 + rand() % 4;
	if (sonuc == cevabiniz)
	{
		switch (dogru)
		{
		case 1: printf("\nCok guzel"); break;
		case 2: printf("\nMukemmel"); break;
		case 3: printf("\nAferin"); break;
		case 4: printf("\nBoyle devam et"); break;
		}
	}
	else
	{
		switch (yanlis)
		{
		case 1: printf("\nHayir.Lutfen tekrar deneyiniz."); break;
		case 2: printf("\nYanlis.Lutfen bir daha deneyiniz."); break;
		case 3: printf("\nPes etmeyin."); break;
		case 4: printf("\nHayir.Denemeye devam edin"); break;
		}
		printf("\nDogru cevap:%d",sonuc);
	}
}*/
int main()
{
	srand(time(NULL));
	char cevap,islem;
	float cevabiniz,sonuc;
	int adet,i,sayi1,sayi2, dogru, yanlis;
	sayi1 = rand() % 50;
	sayi2 = rand() % 50;
	printf("Lutfen islem oynunu oynamaya ne dersi?(E/H)\nCevabiniz:");
	scanf_s("%c",&cevap);
	if (cevap == 'E')
	{
		printf("Kac tane islem cozmek istiyorsun?\nCevabiniz:");
		scanf_s("%d", &adet);
		for (i = 0; i < adet; i++)
		{
			//printf("1-Toplama\n2-Cikartma\n3-Carpma\n4-Bolme\n5-Mod alma");
			islem = 1 + rand() % 4;
			switch (islem)
			{
			case 1: sonuc = sayi1 + sayi2; printf("\n%d + %d", sayi1, sayi2); break;
			case 2: sonuc = sayi1 - sayi2; printf("\n%d - %d", sayi1, sayi2); break;
			case 3: sonuc = sayi1 * sayi2; printf("\n%d * %d", sayi1, sayi2); break;
			case 4: sonuc = (float)sayi1 / (float)sayi2; printf("\n%d / %d", sayi1, sayi2); break;
				//case 5: sonuc = sayi1 %sayi2; printf("\n%d \% %d", sayi1, sayi2); break;
			}
			printf(" kactir?\nCevabiniz:");
			scanf_s("%f", &cevabiniz);
			dogru = 1 + rand() % 4;
			yanlis = 1 + rand() % 4;
			if (sonuc == cevabiniz)
			{
				switch (dogru)
				{
				case 1: printf("Cok guzel\n"); break;
				case 2: printf("Mukemmel\n"); break;
				case 3: printf("Aferin\n"); break;
				case 4: printf("Boyle devam et\n"); break;
				}
			}
			else
			{
				switch (yanlis)
				{
				case 1: printf("Hayir.Lutfen tekrar deneyiniz.\n"); break;
				case 2: printf("Yanlis.Lutfen bir daha deneyiniz.\n"); break;
				case 3: printf("Pes etmeyin.\n"); break;
				case 4: printf("Hayir.Denemeye devam edin\n"); break;
				}
				printf("Dogru cevap:%d", sonuc);
			}
		}
			
		
	}
	else
		printf("\nCikis icin herhangi bir tusa basabilirsiniz.\n");
	return;
}