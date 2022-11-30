#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rasgele()
{
	int secim;
	secim = 1 + rand() % 3;
	return secim;
}

int main()
{
	srand(time(NULL));
	int secim,adet,puan=0;
	printf("Tas-Kagit-Makas oynuna hos geldiniz.\n");
	printf("\n1-Tas\n2-Kagit\n3-Makas\n");
	//printf("\nLutfen kac kez oynayacaginizi girin:");
	//scanf_s("%d",&adet);
	tekrar: printf("\nLutfen secim yapiniz:");
	scanf_s("%d",&secim);
	
	if (secim == 1 && rasgele() == 1)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("tas\ttas\tberaber\n");
	}
	else if (secim == 1 && rasgele() == 2)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("tas\tkagit\tkaybettiniz\n");
	}
	else if (secim == 1 && rasgele() == 3)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("tas\tmakas\tkazandiniz\n");
		puan++;
	}
	else if (secim == 2 && rasgele() == 1)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("kagit\ttas\tkazandiniz\n");
		puan++;
	}
	else if (secim == 2 && rasgele() == 2)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("kagit\tkagit\tberaber\n");
	}
	else if (secim == 2 && rasgele() == 3)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("kagit\tmakas\tkaybettiniz\n");
	}
	else if (secim == 3 && rasgele() == 1)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("makas\ttas\tkaybettiniz\n");
	}
	else if (secim == 3 && rasgele() == 2)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("makas\tkagit\tkazandiniz\n");
		puan++;
	}
	else if (secim == 3 && rasgele() == 3)
	{
		printf("Siz  Bilgisayar  Sonuc\n");
		printf("makas\tmakas\tberaber\n");
	}
	printf("\t\t\tPUAN:%d",puan);
	goto tekrar;
	return;
	
}