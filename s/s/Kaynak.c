#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 100
void elemanlarioku(int A[], int boyut);
void diziyesayiyazdir(int a[], int b);
int main(void)
{
	srand(time(0));
	int n, i, sayilar[N];
	printf("Dizinin uzunlugunu giriniz:");
	scanf("%d",&n);
	diziyesayiyazdir(sayilar, n);
	elemanlarioku(sayilar, n);
}
void elemanlarioku(int A[], int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
		printf("%d ", A[i]);
}
void diziyesayiyazdir(int a[], int b)
{
	int i;
	for (i = 0; i < b; i++)
		a[i] = rand() % 10;
}