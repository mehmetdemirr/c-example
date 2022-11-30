#include <stdio.h>
int main()
{
	int i,sayi, tektoplam = 0, tekcarpim = 1, ciftkaretoplam = 0;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d",&sayi);
	for (i = 1; i <= sayi; i++)
	{
		if (i % 2 != 0)
		{
			tektoplam += i;
			tekcarpim *= i;
		}
		else
			ciftkaretoplam += (i * i);
	}
	printf("1'den %d'ye kadar olan tek sayilarin toplami:%d\n", sayi, tektoplam);
	printf("1'den %d'ye kadar olan tek sayilarin carpimi:%d\n", sayi, tekcarpim);
	printf("1'den %d'ye kadar olan cift sayiarin kareleriin toplami:%d\n", sayi,ciftkaretoplam);
	return;
}