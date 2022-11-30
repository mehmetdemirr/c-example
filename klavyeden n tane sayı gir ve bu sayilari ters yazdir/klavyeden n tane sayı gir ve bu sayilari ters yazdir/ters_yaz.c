#include<stdio.h>
void tersyazdir(int sayi)
{
	int b[6],i=0,j;
	while (sayi != 0)
	{
		b[i] = sayi % 10;
		sayi /= 10;
		i++;
	}
	for (j=0;i>j; j++)
		printf("%d",b[j]);
}
void main()
{
	int n, a[20],i;
	printf("Lutfen kac adet sayi gireceginizi giriniz(1-20):");
	scanf_s("%d", &n);
	if (n <= 20)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d. sayiyi girin:", i + 1);
			scanf_s("%d", &a[i]);
		}
		printf("\nGirdiginiz sayilar:\n");
		for (i = 0; i < n; i++)
			printf("%d.sayi=>%d\n", i + 1, a[i]);
		printf("Girdiginiz sayilarin tersten yazdirma:\n");
		for (i = 0; i < n; i++)
		{
			printf("%d.sayi=>", i + 1);
			tersyazdir(a[i]);
			printf("\n");
		}
	}
	else
		printf("Lutfen 1-20 arasinda bir sayi sayi giriniz.");
}