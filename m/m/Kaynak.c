#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void doldur(int a[], int b)
{
	int i;
	for (i = 0; i < b; i++)
		a[i] = rand() % 10;
}
void yazdir(int a[], int b)
{
	int i;
	for (i = 0; i < b; i++)
		printf("%d ",a[i]);
}
void doldur_1(int a[], int b[],int N)
{
	int i;
	for (i = 0; i <N; i++)
		b[a[i]]++;

}
int main()
{
	int i, N,A[100],B[10]={0};
	printf("Bir sayi giriniz:");
	scanf("%d", &N);
	doldur(A, N);
	yazdir(A, N);
	doldur_1(A,B,N);
	printf("\n");
	yazdir(B, 10);
	return;
}