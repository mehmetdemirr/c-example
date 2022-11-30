#include<stdio.h>
#define N 100
void diziyaz(int dizi[], int boyut);
void sirala(int dizi[], int boyut);
int main()
{
	int dizi[N], i, adet;
	printf("Dizi uzunlugunu giriniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%d", &dizi[i]);
	}
	sirala(dizi, adet);
	diziyaz(dizi, adet);
	return;
}
void diziyaz(int dizi[], int boyut)
{
	printf("\n");
	int i;
	for (i = 0; i < boyut; i++)
		printf("%d ",dizi[i]);
	printf("\n");
}
void sirala(int dizi[], int boyut)
{
	int i, j,key;
	for (i = 1; i < boyut; i++)
	{
		key = dizi[i];
		j = i - 1;
		while (j >= 0 && dizi[j]> key)
		{
			dizi[j + 1] = dizi[j];
			j--;
		}
		dizi[j + 1] = key;
	}
}