#include<stdio.h>
#include<math.h>
int asalmi(say)
{
	int i;
	for (i = 2; i < say; i++)
		if (say % i == 0)
			return 0;
	if (say == i)
		return 1;
}
void main(void)
{
	int sayi,sayieksi,sayiarti;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	sayieksi = sayi;
	sayiarti = sayi;
	if (asalmi(sayi) == 1)
		printf("Girdiginiz sayi asal sayidir.\n");
	else
	{
		while (asalmi(sayiarti) != 1)
			sayiarti++;
		while (asalmi(sayieksi) != 1)
			sayieksi--;
		printf("Altaki asal sayi:%d\nUsteki asal sayi:%d\n", sayieksi, sayiarti);
		if ((sayi - sayieksi) == (sayiarti - sayi))
			printf("%d sayisina en yakin asal sayilar:%d ve %d", sayi, sayieksi, sayiarti);
		else if ((sayi - sayieksi) < (sayiarti - sayi))
			printf("%d sayisina en yakin asal sayi:%d", sayi, sayieksi);
		else
			printf("%d sayisina en yakin asal sayi:%d", sayi, sayiarti);
	}
}