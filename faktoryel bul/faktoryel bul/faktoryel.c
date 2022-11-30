#include<stdio.h>
int faktoryel(int i);
int main()
{
	int sayi,fakt;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);
	fakt=faktoryel(sayi);
	printf("%d sayisinin faktoryeli:%d", sayi, fakt);
	return;
}
int faktoryel(int i)
{
	int fakt = 1,j;
	for (j = i; j > 1; j--)
		fakt *= j;
	return fakt;
}