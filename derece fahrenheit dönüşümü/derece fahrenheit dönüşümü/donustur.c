#include <stdio.h>
double derece(float derece)
{
	double fahren;
	fahren = (212 * derece + 200) / 100.0;
	return fahren;
}
double fahren(float fahren)
{
	double derece;
	derece = (100 * fahren - 200) / 212.0;
	return derece;
}
int main()
{
	int secim;
	float d, fahrenheit;
	double sonuc;
	printf("1-Dereceyi,fahrenheita donusturmek\n2-Fahrenheiti,derceye donusturmek");
	printf("\nLutfen bir secim yapiniz:");
	scanf_s("%d", &secim);
	if (secim == 1)
	{
		printf("Lutfen fahrenheite donusturmek istediginiz degeri giriniz:");
		scanf_s("%f",&d);
		sonuc = derece(d);
		printf("\n%.2f derece = %.2f fahrenheit", derece, sonuc);
	}
	else if (secim == 2)
	{
		printf("\nLutfen derceye donusturmek istediginiz degeri giriniz:");
		scanf_s("%f",&fahrenheit);
		sonuc = fahren(fahrenheit);
		printf("%.2f fahrenheit = %.2f derece", fahrenheit, sonuc);
	}
	else
		printf("Hatali bir secim yaptiniz.");
	return;
}