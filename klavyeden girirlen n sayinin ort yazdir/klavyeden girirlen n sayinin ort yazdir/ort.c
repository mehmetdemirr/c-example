#include<stdio.h>
int main()
{
	int adet,i;
	float a[100],toplam=0;
    printf("Lutfen kac adet sayi gireceginizi giriniz:");
	scanf_s("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d. sayi giriniz=>", i + 1);
		scanf_s("%f", &a[i]);
		toplam += a[i];
	}
	printf("Girdiginiz sayilarin ortalmasi:%.2f", toplam / adet);
	/*printf("\nGirdiginiz sayilar:");   //Girdiginiz sayilari yazdirma
	for (i = 0; i < adet; i++)
	{
		printf("\n%d. sayi =>%.2f", i+1,a[i]);
	}*/
	return;
}