#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void randomsayiiledizidoldur(int d[], int boyut)
{
	int j;
	for (j = 0; j < boyut; j++)
		d[j] = rand() % 10;  //0-9 diziye sayi atama 
}
void dizininelemanlariniyazdirma(int c[], int boyut)
{
	int j;
	for (j = 0; j < boyut; j++)
		printf("%d ",c[j]);
	printf("\n"); // fonksiyondan ciktiktan sonra yeni satira gecsin
}
void AdizisinintekrariniB(int A[],int B[],int boyut)
{
	int j;
	for (j = 0; j < boyut; j++)
		B[A[j]]++;    //B dizisini doldurma
}
void dizihistogramciz(int c[], int boyut,int dizininmax)
{
	int m,d,b;
	for (b = 0; b < 4; b++)  // satir birakma
		printf("\n");
	for (m =dizininmax; m>0; m--)  // dizinin en buyuk elemani kadar donsun
	{
		for (d = 0; d <boyut ; d++)
		{
			if (c[d] >= m)  // dizinin elemani maxdan buyuk ya da esit ise * at
			{
				printf("* ");
			}
			else
				printf("  ");

		}
		printf("\n");
	}
}
void main(void)
{
	srand(time(0)); //calistiginda farkli sayilar ile calissin
	int A[150], B[10] = { 0 }, N,max=0,m;
	printf("Dizinin uzunlugunu giriniz:");
	scanf("%d", &N);
	randomsayiiledizidoldur(A, N);  //diziyi rasgele 0-9 elemanlari ile doldurma
	dizininelemanlariniyazdirma(A, N);
	AdizisinintekrariniB(A, B, N);  //B dizisini doldur
	dizininelemanlariniyazdirma(B, 10);
	for (m = 0; m < 10; m++)
		if (B[m] > max)
			max = B[m];
	dizihistogramciz(B, 10, max);
}