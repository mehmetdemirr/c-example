#include<stdio.h>
int main()
{
	int sayi,i,j;
	printf("Lutfen sayi giriniz:");
	scanf("%d", &sayi);
	for (i = 1; i <= sayi; i++)
		printf("*");
	printf("\n");
	for (i = 1; i <= sayi - 2; i++)
	{
		printf("*");
		for (j = 1; j <= sayi - 2; j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	for (i = 1; i <= sayi; i++)
		printf("*");
	return;
}