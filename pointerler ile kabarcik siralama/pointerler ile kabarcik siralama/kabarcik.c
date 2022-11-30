#include<stdio.h>
#define BOYUT 100
void yerdegistir(int *m,int *n);
int main()
{
	int adet,i,j,sayi[BOYUT];
	printf("Lutfen dizinin kac elemani oldugunu giriniz:");
	scanf_s("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani giriniz:",i + 1);
		scanf_s("%d", &sayi[i]);
	}
	printf("Dizinin siralanmamis hali:\n");
	for (i = 0; i < adet; i++)
	{
		printf("%d  ",sayi[i]);
	}
	for (j = 0; j < adet-1; j++)
		for (i = 0; i < adet - 1 - j; i++)
			if (sayi[i] > sayi[i + 1])
			{
				yerdegistir(&sayi[i],&sayi[i+1]);
			}
	printf("\nDizinin siralanmis hali:\n");
	for (i = 0; i < adet; i++)
	{
		printf("%d  ", sayi[i]);
	}
	return;
}
void yerdegistir(int *bir, int *iki)
{
	int temp;
	temp=*bir;
	*bir = *iki;
	*iki = temp;
}
