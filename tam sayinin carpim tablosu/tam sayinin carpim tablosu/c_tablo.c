#include<stdio.h>
void secim()
{
	printf("1)Girdiginiz sayinin carpim tablosu\n"
		"2)1 ile 10 arasindaki sayilarin carpim tablosu\n\n");
	printf("Lutfen secim yapiniz:");
}
void carpimtablosu(int sayi)
{
	int j, i;
	for (i = 1; i <= 10; i++)
	{
		printf("%dx%d=%d  ", i, sayi, i * sayi);
	}
}

int main()
{
	int i,j,sayi,sec;
	secim();
	scanf_s("%d", &sec);
	if (sec == 1)
	{
		printf("Lutfen bir sayi giriniz:");
		scanf_s("%d", &sayi);
		carpimtablosu(sayi);
	}
	else if (sec == 2)
	{
		for (i = 1; i <= 10; i++)
		{
			for (j = 1; j <= 10; j++)
				printf("%dx%d=%d\t", i, j, i * j);
			printf("\n");
		}
	}
	else
		printf("Hatali bir secim yaptiniz:");
	return;
}