#include<stdio.h>
#include<math.h>
int asalmi(int sayi);
int basamaktoplami(int i);
int asalcarpanrakamtoplami(int sayi);
int main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d",&sayi);
	if (asalmi(sayi) == 0 && sayi>1)
	{
		if (basamaktoplami(sayi)==asalcarpanrakamtoplami(sayi))
			printf("%d smith sayidir.",sayi);
		else
			printf("%d smith sayi degildir.", sayi);
	}
	else
		printf("%d smith sayi degildir.", sayi);
	return;
}
int asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi; i++)
		if (sayi % i != 0)
			return 0;
	return 1;
}
int basamaktoplami(int sayi)
{
	int toplam = 0;
	while (sayi != 0)
	{
		toplam+= sayi % 10;
		sayi /= 10;
	}
	return toplam;
}
int asalcarpanrakamtoplami(int sayi)
{
	int i,j, sayim = sayi,toplam=0;
	for (i = 1; i <= sayi; i++)
		if (sayi % i == 0)
			if (asalmi(i) == 1)
			{
				toplam += basamaktoplami(i);
				for (j = 1; j <= sayi; j++)
					while (sayim / i == pow(sayim, j))
					{
						toplam += basamaktoplami(i);
						sayim /= i;
					}
			}
	return toplam;
}