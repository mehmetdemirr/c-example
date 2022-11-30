#include <stdio.h>
#include <math.h>
int carpanlartoplami(int sayi)
{
	int i,toplam=0;
	for (i = 1; i < sayi;i++)
	{
		if (sayi % i == 0)
		{
			toplam += i;			
		}
	}
	return toplam;
}
int main()
{
	int sayi1,sayi2,s1toplam,s2toplam;
	printf("Birinci sayiyi girin:");
	scanf_s("%d",&sayi1);
	printf("Ikinci sayiyi girin:");
	scanf_s("%d",&sayi2);
	s1toplam = carpanlartoplami(sayi1);
	s2toplam = carpanlartoplami(sayi2);
	//printf("\n%d sayisinin carpanlari toplami:%d", sayi1, s1toplam);
	//printf("\n%d sayisinin carpanlari toplami:%d", sayi2, s2toplam);
	if (s1toplam == sayi2 && s2toplam == sayi1)
		printf("\n%d ve %d sayilari dost sayilardir.",sayi1,sayi2);
	else
		printf("\n%d ve %d sayilari dost sayilar degildir.",sayi1,sayi2);
	return;
}