#include<stdio.h>
void main()
{
	int sayi, i,j;
	printf("Satir giriniz:");
	scanf_s("%d", &sayi);
	for (i = 1; i <= sayi; i++)
	{
		for (j = 1; j <=i-1; j++)
			printf("*");
		printf("%d", i);
		for (j = 1; j <= sayi - i; j++)
			printf("+");
		printf("\n");
	}
}