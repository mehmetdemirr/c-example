#include <stdio.h>
#include <math.h>

int ikisayiarasikarealma(int sayi1, int sayi2)
{
	int sonuc;
	for (sayi1; sayi1 <= sayi2; sayi1++)
	{
		sonuc = pow(sayi1, 2);
		printf("\n %d 'nin karesi %d 'dir.",sayi1,sonuc);
	}
	return 0;
}
int main()
{
	int sayi1, sayi2;
	printf("Lutfen karesini alacaginiz sayi araligini giriniz:");
	scanf_s("%d %d", &sayi1, &sayi2);
	ikisayiarasikarealma(sayi1, sayi2);
    
	return 0;
}