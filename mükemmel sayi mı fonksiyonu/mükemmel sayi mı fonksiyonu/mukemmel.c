#include <stdio.h>
void carpanlar(int sayi)
{
	int i, mod;
	printf("\n%d sayisinin carpanlari: ", sayi);
	for (i = 1; i < sayi; i++)
	{
		mod = sayi % i;
		if (mod == 0)
		{
			printf("%d  ", i);
		}
	}
}
int mukemmel(int sayi) 
{
	int i, toplam = 0,mod;
	for (i= 1; i < sayi; i++)
	{
		mod = sayi % i;
		if (mod == 0)
		{
			toplam +=i;
		}
	}
	if (toplam == sayi)
	{
		printf("\n%d mukemmel sayidir.\n", sayi);
		return 1;
	}
	else
	{
		printf("\n%d mukemmel sayi degildir.\n", sayi); 
		return 0;
	}
}
int main()
{
	int sayi;
	printf("NOT:Programimiz girilen sayiyinin mukemmel sayi oldup olmadigini bulmaktadir.\n");
	printf("\nLutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	if (mukemmel(sayi) == 1)
	{
		carpanlar(sayi);
	}
    
	return;
}