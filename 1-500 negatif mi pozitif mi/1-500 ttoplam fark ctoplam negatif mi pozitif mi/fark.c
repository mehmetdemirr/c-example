#include<stdio.h>
void isaret(int sayi)
{
	if (sayi > 0)
		printf("Pozitif");
	else if (sayi = 0)
		printf("Notr(sifir)");
	else
		printf("Negatif");
}
void main()
{
	int i, ttoplam = 0, ctoplam = 0;
	for (i = 1; i <= 500; i++)
	{
		if (i % 2 == 0)
			ctoplam += i;
		else
			ttoplam += i;
	}
	printf("1-500 sayilari dahil arasindaki tek sayilarin toplami:%d", ttoplam);
	printf("\n1-500 sayilari dahil arasindaki cift sayilarin toplami:%d", ctoplam);
	printf("\nTek toplam-Cift toplam=%d", ttoplam - ctoplam);
	printf("\nFarkin isareti: ");
	isaret(ttoplam - ctoplam);

}