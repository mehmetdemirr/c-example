#include<stdio.h>
void asalmi(int sayi);
void main()
{
	int i, ksayi, bsayi,gecici;
	printf("bir sayi giriniz:");
	scanf("%d", &ksayi);
	printf("bir sayi giriniz:");
	scanf("%d", &bsayi);
	if (ksayi > bsayi)
	{
		gecici = bsayi;
		bsayi = ksayi;
		ksayi = gecici;
	}
	printf("%d-%d arasi asal sayilar:", ksayi, bsayi);
	for (i = ksayi; i <= bsayi; i++)
		asalmi(i);
}
void asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi; i++)
		if (sayi % i== 0)
			break;
	if (sayi == i)
		printf("%d ", sayi);
}