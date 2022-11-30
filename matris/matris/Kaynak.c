#include<stdio.h>
#define BOYUT 100
int i, j, dizi[BOYUT][BOYUT], satir, sutun;
void matrisyaz();
void matrisdoldur(int a, int b);
void matrisdevinik(int satir, int sutun);
int main()
{
	printf("Satir sayisini giriniz:");
	scanf("%d", &satir);
	printf("Sutun sayisini giriniz:");
	scanf("%d", &sutun);
	matrisdoldur(satir, sutun);
	printf("Matris elemanlari:");
	matrisyaz();
	printf("Matrisin devinigi:");
	matrisdevinik(satir, sutun);
	return;
}
void matrisyaz()
{
	printf("\n");
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun;j++)
			printf("%3d", dizi[i][j]);
		printf("\n");
	}
	printf("\n");
}
void matrisdoldur(int satir, int sutun)
{
	for (i = 0; i < satir; i++)
		for (j = 0; j < sutun; j++)
		{
			printf("%d.elemani giriniz:", i + 1);
			scanf("%d", &dizi[i][j]);
		}
}
void matrisdevinik(int satir, int sutun)
{
	printf("\n");
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
			printf("%3d", dizi[j][i]);
		printf("\n");
	}
	printf("\n");
}