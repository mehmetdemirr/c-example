#include<stdio.h>
void mukemmel(int sayi);
void main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d", &sayi);
	mukemmel(sayi);

}
void mukemmel(int sayi)
{
	int i,toplam=0;
	for (i = 1; i < sayi; i++)
		if (sayi % i == 0)
			toplam += i;
	if (toplam == sayi)
		printf("\n%d mukemmel sayidir.", sayi);
	else
		printf("\n%d mukemmel sayi degildir.", sayi);
}