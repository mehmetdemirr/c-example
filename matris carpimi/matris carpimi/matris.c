#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 100
int main(void)
{
	srand(time(NULL));
	int a[N][N], b[N][N],c[N][N],i, j,k,satira,sutuna,satirb,sutunb,toplam=0;
	printf("a matrisinin satir sayisini giriniz(1-100):");
	scanf("%d",&satira);
	while (satira < 0 || satira>100)
	{
		printf("a matrisinin satir sayisini tekrar giriniz:");
		scanf("%d", &satira);
	}
	printf("a matrisinin sutun sayisini giriniz(1-100):");
	scanf("%d", &sutuna);
	while (sutuna < 0 || sutuna>100)
	{
		printf("a matrisinin sutun sayisini tekrar giriniz:");
		scanf("%d", &sutuna);
	}
	printf("b matrisinin satir sayisini giriniz(1-100):");
	scanf("%d", &satirb);
	while (satirb < 0 || satirb>100)
	{
		printf("b matrisinin satir sayisini tekrar giriniz:");
		scanf("%d", &satirb);
	}
	printf("b matrisinin sutun sayisini giriniz(1-100):");
	scanf("%d", &sutunb);
	while (sutunb < 0 || sutunb>100)
	{
		printf("b matrisinin sutun sayisini tekrar giriniz:");
		scanf("%d", &sutunb);
	}
	for (i = 0; i < satira; i++)
		for (j = 0; j < sutuna; j++)
			a[i][j] = rand() % 10;
	for (i = 0; i < satirb; i++)
		for (j = 0; j < sutunb; j++)
			b[i][j] = rand() % 10;
	printf("\na matrisi:\n");
	for (i = 0; i < satira; i++)
	{
		for (j = 0; j < sutuna; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\nb matrisi:\n");
	for (i = 0; i < satirb; i++)
	{
		for (j = 0; j < sutunb; j++)
			printf("%3d", b[i][j]);
		printf("\n");
	}
	if (sutuna == satirb)
	{
		printf("\n\na[%d][%d] x b[%d][%d] = c[%d][%d]",
			satira, sutuna, satirb, sutunb, satira, sutunb);
		for (i = 0; i < satira; i++)
			for (j = 0; j < sutunb; j++)
			{
				for (k = 0; k < satirb; k++)
					toplam += a[i][k] * b[k][j];
				c[i][j] = toplam;
				toplam = 0;

			}
	}
	else
		printf("a ve b matrisleri carpma islemine uygun degildir.");
	printf("\n\na ve b matrislerin carpimi:\n");
	for (i = 0; i < satira; i++)
	{
		for (j = 0; j < sutunb; j++)
			printf("%4d",c[i][j]);
		printf("\n");
	}
		

}