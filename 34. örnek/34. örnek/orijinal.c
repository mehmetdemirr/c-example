#include<stdio.h>
#include<math.h>
int main()
{
	int sayi,basamak[2],i=0,gsayi;
	printf("Lutfen 4 basamakli sayi giriniz:");
	scanf_s("%d", &sayi);
	gsayi = sayi;
	if (sayi >= 1000 && sayi <= 9999)
	{
		while (sayi>= 100)
		{
			basamak[i] = sayi % 10;
			sayi /= 10;
			i++;
		}
		//printf("%d", sayi); sayinin ilk 2 basamagini yazdirir.
		if (pow(sayi+(basamak[0]+basamak[1]*10),2)==gsayi)
			printf("\nGirdiginiz sayi orijinal sayidir.");
		else
			printf("\nGirdiginiz sayi orijinal sayi degildir.");
	}
	else
		printf("\nLutfen 4 basamakli bir sayi girip tekrar deneyiniz...");
	return;
}