#include <stdio.h>
int asalmi(int sayi)
{
	int i,mod;
	for (i = 2; i < sayi; i++)
	{
		mod = sayi % i;
		if (mod == 0)
		{
			//printf("\n%d asal sayi degildir.", sayi);
			return 0;
		}
	}
	//printf("\n%d asal sayidir.", sayi);
	return 1;
}
int main()
{
	int sayi,i,toplam=0;
	/*printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	asalmi(sayi);
	if (asalmi(sayi) == 1)
	{
		printf("\n%d asal sayidir.", sayi);
	}
	else
		printf("\n%d asal sayi degildir.", sayi);
	*/
	for (i = 2; i <= 1000; i++)
	{
		if (asalmi(i)==1)
		{
			printf("%d  ", i);
			toplam++;
		}
	}
	printf("\n\n1-1000'e kadar %d tane asal sayi vardir.", toplam);
	return;

}