#include <stdio.h>
#include <stdio.h>

int main()
{
	int sayi1, sayi2,secim;
	printf("Lutfen islem yapacaginiz sayiyi giriniz:");
	scanf_s("%d", &sayi1);
	printf("Lutfen islem yapacaginiz sayiyi giriniz:");
	scanf_s("%d", &sayi2);
	printf("1-Toplam islemi\n2-Cikartma islemi\n3-Carpma islemi\n4-Bolme islemi\n5-Mod alma");
	printf("\n\nLutfen yapacaginiz islemi seciniz:");
	scanf_s("%d", &secim);
	switch (secim)
	{
	case 1:
	{
		printf("Sonuc:%d", sayi1 + sayi2);
		break;
	}
	case 2:
	{
		printf("Sonuc:%d", sayi1-sayi2);
		break;
	}
	case 3:
	{
		printf("Sonuc:%d", sayi1 * sayi2);
		break;
	}
	case 4:
	{
		printf("Sonuc:%.2f", (float)sayi1/(float) sayi2);
		break;
	}
	case 5:
	{
		printf("Sonuc:%d", sayi1 % sayi2);
		break;
	}

	}


	return 0;
}