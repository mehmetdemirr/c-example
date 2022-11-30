#include<stdio.h>
int adet = 0;
int tambolen(int sayi);
void main()
{
	int sayi,toplam;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d", &sayi);
	printf("%d sayisinin tam bolenleri:",sayi);
	toplam=tambolen(sayi);
	printf("\nTam bolen toplami:%d", toplam);
	printf("\nTam bolen sayisi:%d", adet);
}
int tambolen(int sayi)
{
	int i,toplam=0;
	for (i = 1; i <= sayi; i++)
		if (sayi % i == 0)
		{
			printf("%d ", i);
			toplam += i;
			adet++;
		}
	return toplam;
}