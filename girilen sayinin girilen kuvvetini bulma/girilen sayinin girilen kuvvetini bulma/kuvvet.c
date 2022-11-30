#include<stdio.h>
int main()
{
	int sayi, kuvvet,i,sonuc=1;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	printf("Lutfen %d'nin kacinci kuvvetini alacaginizi giriniz:",sayi);
	scanf_s("%d", &kuvvet);
	for (i = 1; i <=kuvvet; i++)
	{
		sonuc *= sayi;
	}
	printf("%d sayisinin %d.kuvveti %d'dir.",sayi,kuvvet,sonuc);
	return;
}