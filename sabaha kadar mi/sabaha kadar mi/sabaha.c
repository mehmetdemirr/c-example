#include<stdio.h>
#define BOYUT 100
void seninfikrin(int fikir)
{
	if (fikir == 1)
		printf("Sabahlara kadar birlikte kod yazma etkinligi yapalim.");
	else if (fikir == 2)
		printf("Topluluk toplantisi yapalim.");
	else if (fikir == 3)
		printf("9 ve 10.siniflara yazilim muhendisligi hakkinda sunum yapalim.\n"
			"Daha sonrasinda yazilima ilgi duyan ogrencilere proglamaya giris dersi verelim");
	else
		printf("Hepsini seciyorum:)");
}
int main()
{
	int fikir;
	char yenifikir[BOYUT];
	printf("Lutfen fikir numarinizi giriniz:");
	scanf_s("%d", &fikir);
	seninfikrin(fikir);
	printf("\nFikir oneriniz var mi?Varsa lutfen giriniz:");
	scanf_s(" %s",yenifikir);
	return;
}