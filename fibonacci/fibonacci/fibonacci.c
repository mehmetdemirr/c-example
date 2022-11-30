#include<stdio.h>
void fibonacci(int sayi);
int main()
{
	int sayi;
	printf("Lutfen fibonacci dizisinin kac elemanini gormek istediginizi giriniz:");
	scanf("%d", &sayi);
	printf("fibonacci dizisnin ilk %d elemani:",sayi);
	fibonacci(sayi);
	return;
}
void fibonacci(int sayi)
{
	int toplam = 1, terim = 0,i,gecici;
	for (i = 0; i < sayi; i++)
	{
		printf("\n%d.eleman->%d", i + 1, terim);
		toplam += terim;
		gecici = toplam;
		toplam = terim;
		terim = gecici;
	}
}