#include <stdio.h>
void basamakayirma(int sayi)
{
	int basamak[6]={0}, i = 0, j;
	while (sayi != 0)
	{
		basamak[i] = sayi % 10;
		sayi /= 10;
		++i;
	}
	/* j = 0;
	for (j; j <= i; j++)          //sayiyi ters yazdirmak için kullanilir.
		printf("%d  ",basamak[j]);
     */
	for (i; i >=0; i--)
		printf("%d  ",basamak[i]);
	
}
int main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	basamakayirma(sayi);
	return;
}

