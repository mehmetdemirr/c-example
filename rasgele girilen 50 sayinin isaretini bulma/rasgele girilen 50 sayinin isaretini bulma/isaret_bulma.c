#include<stdio.h>
void isaret(int sayi)
{
	if (sayi > 0)
		printf("Pozitif");
	else if (sayi == 0)
		printf("Notr(sifir)");
	else
		printf("Negatif");
}
void main()
{
	int sayi,adet,i;
	printf("Lutfen kac adet sayi gireceginizi giriniz:");
	scanf_s("%d", &adet);
	for (i = 1; i <=adet; i++)
	{
		printf("\n%d. sayiyi giriniz:",i);
		scanf_s("%d", &sayi);
		printf("\t");
		isaret(sayi);
	}
}