#include <stdio.h>
#include <math.h>

altayuvarla(double sayi)
{
	int alta = floor(sayi);
	printf("\nAlt sayiya yuvarlanmis hali:%d", alta);
	return alta;
}
usteyuvarla(double sayi)
{
	int uste = ceil(sayi);
	printf("\nUst sayiya yuvarlanmis hali:%d", uste);
	return uste;
}
int main()
{
	double sayi;
	int secim;
	printf("\nLutfen tam sayiya cevireceginiz ondalikli sayiyi giriniz:");
	scanf_s("%lf", &sayi);
	printf("\nUst sayiya yuvarlamak icin:1");
	printf("\nAlt sayiya yuvarlamak icin:2");
	printf("\n\nLutfen secim yapiniz:");
	scanf_s("%d", &secim);
	switch (secim)
	{
	case 1:
		usteyuvarla(sayi);
		break;
	case 2:
		altayuvarla(sayi);
		break;
	default:
		printf("\nHatali secim yaptiniz.");
	}
	return 0;
}