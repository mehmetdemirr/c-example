#include<stdio.h>
#include<math.h>
#define BOYUT 100
void main()
{
	int adet, i,sayilar[BOYUT],dtoplam=0;
	float toplam=0,ort;
	printf("Kac adet sayi gireceksiniz(1-100):");
	scanf("%d",&adet);
	if (adet <= 100 && adet > 0)
	{
		for (i = 0; i < adet; i++)
		{
			printf("%d.sayiyi giriniz:",i+1);
			scanf("%d",&sayilar[i]);
			toplam += sayilar[i];
		}
		ort = toplam / adet;
		if (ort-(int)ort==0)
		{
			for (i = 0; i < adet; i++)
			{
				if ((int)ort== sayilar[i])
				{
					printf("+");
					++dtoplam;
				}
				else
					printf("-");
				printf("%d girdim.\n", i + 1);
			}

		}
		printf("Ortalamaniz:%.2f\nDizideki adedi:%d", ort, dtoplam);
	}
	else
		printf("Hatali girdiniz.Lutfen tekrar deneyiniz.");
}