#include <stdio.h>
#define BOYUT 5
int main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	int basamak[BOYUT] = { 0 }, i;
	for(i=0;i<sayi;i++)
	{
		basamak[i] = sayi % 10;
		sayi = sayi / 10;
		printf("%d  ", basamak[i]);
	}

		
	
	return;
}