#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define M 100
int main(void)
{
	srand(time(NULL));
	int dizi[M][M],A[M]={0}, B[M]={0}, satir, sutun, i, j;
	printf("Lutfen satir sayisini giriniz(1-100):");
	scanf("%d",&satir);
	while (satir > 100 || satir < 0)
	{
		printf("Lutfen tekrar satir sayisini giriniz:");
		scanf("%d", &satir);
	}
	printf("Lutfen sutun sayisini giriniz(1-100):");
	scanf("%d", &sutun);
	while (sutun > 100 || sutun < 0)
	{
		printf("Lutfen tekrar sutun sayisini giriniz:");
		scanf("%d", &sutun);
	}
	for (i = 0; i < sutun; i++)
		for (j = 0; j < satir; j++)
			dizi[i][j] = rand() % 100;
	printf("\nGiridiginiz matrisin elemanlari:\n");
	for (i = 0; i < sutun; i++)
	{
		for (j = 0; j < satir; j++)
			printf("%3d", dizi[i][j]);
		printf("\n");
	}
	printf("\nGiridiginiz matrisin transporozu:\n");
	for (i = 0; i < sutun; i++)
	{
		for (j = 0; j < satir; j++)
			printf("%3d", dizi[j][i]);
		printf("\n");
	}
	for (i = 0; i < sutun; i++)
	{
		for (j = 0; j < satir; j++)
			A[i] += dizi[i][j];
	}
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
			B[i] += dizi[j][i];
	}
	printf("\nMatrisin 1.diyagoneli:");
	for(i = 0; i < satir; i++)
		for (j = 0; j < sutun; j++)
			if (i == j)
				printf("%d ", dizi[i][j]);
	printf("\nMatrisin 2. diyagoneli:");
	for (i = satir - 1; i >= 0; i--)
		for (j = 0; j<sutun; j++)
			if (i ==sutun-1-j)
				printf("%d ", dizi[i][j]);
	printf("\n");

	printf("\tSATIR\n");
	for (i = 0; i < satir; i++)
		printf("%d.satir toplami:%d\n", i+1, A[i]);
	printf("\tSUTUN\n");
	for (i = 0; i < sutun; i++)
		printf("%d.sutun toplami:%d\n", i+1, B[i]);


	return;
}