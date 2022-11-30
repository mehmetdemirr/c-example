#include<stdio.h>
void main()
{
	int a, b,c, d;
	printf("Lutfen dikdortgenin kenarlarini giriniz(4 kenar):");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a == b && c == d && a == c)
	{
		printf("Girdiginiz dikdortgen ayni zamanda karedir.");
	}
	else
		printf("Girdiginiz dikdortgen kare degildir.");
}