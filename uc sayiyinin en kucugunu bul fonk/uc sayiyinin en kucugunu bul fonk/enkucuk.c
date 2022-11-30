#include <stdio.h>

enkucuk(int sayi1, int sayi2, int sayi3)
{
	int min;
	min = sayi1;
	if (sayi2 < min)
		min = sayi2;
	if (sayi3 < min)
		min = sayi3;
	return min;
}
int main()
{
	int sayi1, sayi2, sayi3,sonuc;
	printf("Lutfen uc tam sayi giriniz:");
	scanf_s("%d %d %d", &sayi1, &sayi2, &sayi3);
	sonuc = enkucuk(sayi1, sayi2, sayi3);
	printf("\n\nGirdiginiz sayilarin en kucugu:%d", sonuc);
    
	return;
}