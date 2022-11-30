#include<stdio.h> v	z	"a211"
#include<stdlib.h>
#include<time.h>
#define N 100
#define BOYUT 10
int max = 0;
void rasgeledoldur(int a[],int b);
void diziyazdir(int a[],int b);
void bdizisinidoldur(int a[], int b[],int c);
void yatayhistogram(int a[]);
void dikeyhistogram(int a[]);
void bmax(int dizi[]);
int main(void)
{
	srand(time(NULL));
	int A[N],B[BOYUT]={0}, adet;
	printf("Lutfen bir sayi giriniz(1-100):");
	scanf("%d",&adet);
	while (adet > 100 || adet <= 0)
	{
		printf("Lutfen 1-100 arasinda bir sayi giriniz:");
		scanf("%d",&adet);
	}
	rasgeledoldur(A,adet);
	diziyazdir(A, adet); //A dizisini yazdir
	bdizisinidoldur(A, B, adet);
	bmax(B);
	printf("\n");
	diziyazdir(B,BOYUT);  //B dizisini yazdirma
	//yatayhistogram(B);
	dikeyhistogram(B);
	return;
}
void rasgeledoldur(int dizi[],int adet)
{
	int i;
	for (i = 0; i < adet; i++)
		dizi[i] = rand() % 10;
}
void diziyazdir(int dizi[], int adet)
{
	int i;
	for (i = 0; i < adet; i++)
		printf(" %d",dizi[i]);
}
void bdizisinidoldur(int A[], int B[],int adet)
{
	int i;
	for (i = 0; i < adet; i++)
		++B[A[i]];
}
void yatayhistogram(int B[])
{
	int i,j;
	printf("\n\n\n");
	for (i = 0; i <BOYUT; i++)
	{
		printf("%d=>",i);
		for (j = 1; j <=B[i]; j++)
			printf("*");
		printf("\n");
	}
}
void dikeyhistogram(int B[])
{
	int i,j;
	printf("\n\n\n");
	for (i =max;i>0; i--)
	{
		for (j = 0; j < BOYUT; j++)
		{
			if (B[j]>=i)
				printf(" *");
			else
				printf("  ");
		}
		printf("\n");
	}
}
void bmax(int dizi[])
{
	int i;
	for (i = 0; i <BOYUT; i++)
		if (dizi[i]>max)
			max = dizi[i];
}