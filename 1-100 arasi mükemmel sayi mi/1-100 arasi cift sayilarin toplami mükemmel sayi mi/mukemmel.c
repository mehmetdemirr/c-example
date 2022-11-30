#include <stdio.h>
int carpantoplam(int sayi)
{
	int i,toplam=0;
	for (i = 1; i <= sayi; i++)
	{
		if (sayi % i == 0)
			toplam += i;
	}
	return toplam;
}
int main()
{
	int ciftt=0,carpant,i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			ciftt++;
	}
	carpant = carpantoplam(ciftt);
	if (carpant == ciftt)
		printf("1-100 kadar olan cift sayilarin toplami mukemmel sayidir.\n");
	else
		printf("1-100 kadar olan cift sayilarin toplami mukemmel sayi degildir.\n");
	return;
}