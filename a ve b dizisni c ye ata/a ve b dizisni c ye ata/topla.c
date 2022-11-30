#include<stdio.h>
#define BOYUT 100
void dizidoldur(int a[], int boyut);
void dizitopla(int a[], int b[], int c[], int boyut);
void diziyazdir(int dizi[], int boyut);
int main()
{
	int sayi,a[BOYUT],b[BOYUT],c[BOYUT], boyut;
	printf("Lutfen a ve dizisinin boyutunu giriniz:");
	scanf("%d",&boyut);
	printf("a dizisinin elemanlarini giriniz:\n");
	dizidoldur(a, boyut);
	printf("b dizisinin elemanlarini giriniz:\n");
	dizidoldur(b, boyut);
	dizitopla(a, b, c, boyut);
	printf("c dizisinin elemanlari:");
	diziyazdir(c, boyut);
	return;
}
void dizidoldur(int a[], int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%d", &a[i]);
	}
}
void dizitopla(int a[], int b[], int c[],int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
		c[i] = b[i] + a[i];
}
void diziyazdir(int dizi[], int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
		printf("\n%d.eleman->%d", i + 1, dizi[i]);
}