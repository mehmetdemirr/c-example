#include <stdio.h>
int main()
{
	int adet,toplam=0,sayi;
	printf("Lutfen kaç tane sayiyi toplayacaginizi girin:");
	scanf_s("%d",&adet);
tekrar: if (adet > 0)
{
	printf("Lutfen sayi giriniz:");
	scanf_s("%d", &sayi);
	toplam = toplam + sayi;
	adet = adet - 1;
	goto tekrar;
}
else
printf("Girdiginiz sayilarin toplami %d dir.", toplam);
return 0;








 }