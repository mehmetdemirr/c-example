#include <stdio.h>
#include <math.h>
 void kuvvetimi(int sayi,int kuvvet)
{
	int sayi1,i;
	for (i = 1; i <= 10; i++)
	{
		sayi1 = pow(kuvvet,i);
		if (sayi1 == sayi)
		{
			printf("\nGirdiginiz sayi %d'in %d. kuvvetidir.", kuvvet, i);
			return;
		}
	}
	printf("Girdiginiz sayi %d sayisinin kuvveti degildir.", kuvvet);
}
int main()
{
	int sayi,kuvvet,deger;
	printf("Kuvveti mi(sayi gir):");
	scanf_s("%d",&kuvvet);
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d",&sayi);
	kuvvetimi(sayi,kuvvet);
	/*if (deger == 1)
		printf("%d sayisi %d'nin kuvvetidir.",sayi, kuvvet);

	else if(deger==0)
		printf("%d sayisi %d'nin kuvveti degildir.",sayi,kuvvet);*/
	return;
}