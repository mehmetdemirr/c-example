#include<stdio.h>
void sirala(int dizi[], int boyut);
void diziyaz(int dizi[], int boyut);
#define N 100
int main()
{
	int dizi[N], i,adet;
	printf("Dizi uzunlugunu giriniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani giriniz:", i + 1);
		scanf("%d", &dizi[i]);
	}
	sirala(dizi, adet);
	diziyaz(dizi, adet);
	return;
}
void sirala(int dizi[], int boyut)
{
	int i, j,min,gecici;
	for (i = 0; i < boyut; i++)
	{
		min = i;
		for (j = i; j < boyut; j++)
		{
			if (dizi[j] < dizi[min])
				min = j;
		}
		gecici = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = gecici;
	}
}
void diziyaz(int dizi[], int boyut)
{
	printf("\n");
	int i;
	for (i = 0; i < boyut; i++)
		printf("%d ", dizi[i]);
}
