#include<stdio.h>
int asalmi(int sayi);
int asalcarpanlar(int);
int main()
{
	int sayi,deger;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d",&sayi);
	deger=asalcarpanlar(sayi);
	if (deger == 0)
		printf("kuvvetli sayi degildir.");
	else
		printf("kuvvetli sayidir.");
	return;
}
int asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi; i++)
	{
		if (sayi % i != 0)
		{
			return 0;
		}
	}
	return 1;
}
int asalcarpanlar(int sayi)
{
	int i;
	for (i = 1; i <= sayi; i++)
	{
		if (sayi%i==0)
		{
			if (asalmi(i) == 1)
			{
				if ( sayi / (i * i) != 0)
				{
					//printf("Kuvvetli sayi degildir.");
					return 0;
				}
			}
		}
	}
	return 1;
}