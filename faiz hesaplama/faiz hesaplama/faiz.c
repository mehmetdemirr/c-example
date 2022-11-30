#include <stdio.h>
#include <math.h>

int main()
{
	int yil, apara, kpara, faizorani,toplam,i;
	printf("Lutfen faize yatiracaginiz para miktarini giriniz: ");
	scanf_s("%d", &apara);
	printf("Lutfen yatirdiginiz bankanin faiz oranini giriniz:");
	scanf_s("%d", &faizorani);
	printf("Paranizi kac yilligina yatiracaksiniz:");
	scanf_s("%d", &yil);
    kpara = apara * pow(1 + faizorani, yil);
	toplam = apara + kpara;
	printf("\n\n%d yil sonra cekeceginiz para miktari %d dir.", yil, toplam);
	return 0;
}