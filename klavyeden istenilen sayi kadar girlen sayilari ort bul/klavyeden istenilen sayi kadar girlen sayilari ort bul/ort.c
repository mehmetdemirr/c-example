#include<stdio.h>
int main()
{
	int i,adet, sayi,toplam=0;
	printf("Kac adet sayi gireceksiniz:");
	scanf_s("%d", &adet);
	for (i =1; i <= adet; i++)
	{
		printf("%d. sayiyi giriniz:",i);
		scanf_s("%d",&sayi);
		toplam += sayi;
	}
	printf("Girdiginiz %d sayinin ortalamasi %.2f'dir.", adet, toplam / (float)adet);
	return;
}