#include<stdio.h>
#define BOYUT 100
void diziyazdir(int b[], int boyut);
void secereksiralama(int b[], int a);
int main()
{
	int dizi[BOYUT],adet,i;
	printf("Lutfen kac adet sayiyi siralacaginizi giriniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.sayiyi giriniz:", i + 1);
		scanf("%d",&dizi[i]);
	}
	printf("\nSiralanmamis dizi elemanlari:\n");
	diziyazdir(dizi, adet);
	secereksiralama(dizi, adet);
	printf("\nSiralanmis dizi elemanlari:\n");
	diziyazdir(dizi, adet);
	return;
}
void diziyazdir(int b[], int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
		printf("%d ", b[i]);
}
void secereksiralama(int b[], int a)
{
	int i,min,j,gecici;
	for (i = 0; i < a - 1; i++)
	{
		min = i;
		for (j = i; j < a - i; j++)
			if (b[j] < b[min])
				min = j;
		gecici = b[min];
		b[min] = b[i];
		b[i] = gecici;
	}
}