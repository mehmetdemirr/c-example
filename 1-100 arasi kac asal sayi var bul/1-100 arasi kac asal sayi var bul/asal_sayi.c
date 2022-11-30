#include<stdio.h>
int asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi && sayi%i!=0; i++);
	if (i == sayi)
		return 1;
	return 0;
}
int main()
{
	int i,sayi,toplam=0;
	printf("NOT:Program ikiden gireceginiz sayiya kadar kac asal sayi oldugunu yazdiriyor.");
	printf("\nLutfen sayi giriniz:");
	scanf_s("%d",&sayi);
	for (i = 2; i <= sayi; i++)
	{
		if (asalmi(i) == 1)
		{
			printf("\n%d asal sayidir.",i);
			toplam++;
		}
	}
	printf("\n1-%d arasinda toplam %d tane asal sayi vardir.", sayi, toplam);
}