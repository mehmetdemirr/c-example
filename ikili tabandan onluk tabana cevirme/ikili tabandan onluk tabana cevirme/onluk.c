#include<stdio.h>
#include<math.h>
void main()
{
	int sayi,basamak[20],i=0,toplam=0;
	printf("Lutfen iki tabaninda bir sayi giriniz:");
	scanf_s("%d", &sayi);
	printf("%d sayisinin onluk tabanindaki gosterimi:", sayi);
	while (sayi != 0)
	{
		basamak[i] = sayi % 10;
		sayi /= 10;
		toplam += basamak[i] * pow(2, i);
		//printf("%d  ", basamak[i]); //tersten sayiyi yazdirir.
		i++;
	}
	/*while (i >= 0)
	{
		toplam = pow(2, i) * basamak[i];
		i--;
	}*/
	printf("%d", toplam);
}