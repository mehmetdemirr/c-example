#include<stdio.h>
void main()
{
	int alt = 1, �st = 63, orta,anahtar,gecici,gecici1,i=0;
	orta = (63 + 1) / 2;
	printf("Lutfen 1-63 arasi aramak istediginiz sayiyiyi giriniz:");
	scanf_s("%d", &anahtar);
	if (�st >= anahtar && anahtar >= 1)
	{
		while (anahtar != orta)
		{
			if (anahtar > orta)
			{
				gecici = orta;
				orta = alt;
				alt = gecici;
				orta = (alt + �st) / 2;
				i++;
			}
			else
			{
				gecici1 = orta;
				orta = �st;
				�st = gecici1;
				orta = (alt + �st) / 2;
				i++;
			}
		}
		printf("Aradiginiz %d sayisi %d adimda bulundu.", anahtar, i + 1);
	}
	else
		printf("Lutfen 1-63 arasinda bir sayi giriniz.");
}