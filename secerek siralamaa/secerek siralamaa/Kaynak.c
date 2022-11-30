#include<stdio.h>
void diziyaz(int d[], int boyut)
{
	printf("\nDizi elemanlari:");
	int i;
	for (i = 0; i < boyut; i++)
		printf("%d ", d[i]);
	printf("\n");
}
void sirala(int a[], int adet);
void main(void)
{
	int dizi[100], i,adet;
	printf("Lutfen dizi uzunlugunu giriniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemanini giriniz:", i + 1);
		scanf("%d", &dizi[i]);
	}
	diziyaz(dizi, adet);
	printf("Kucukten buyuge:");
	sirala(dizi, adet);
	diziyaz(dizi, adet);
}
void sirala(int a[], int adet)
{
	int i,j,gecici;
	for (i = 0; i < adet-1; i++)
		for(j=0;j<adet-i-1;j++)
			if (a[j+1] < a[j])
			{
				gecici = a[j];
				a[j] = a[j + 1];
				a[j + 1] = gecici;
			}
	
}