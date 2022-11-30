#include <stdio.h>
int main()
{
	int toplam=0,sayi1, sayi2,i;
	printf("Lutfen carpmak istdeginiz iki sayi giriniz:");
	scanf_s("%d %d", &sayi1, &sayi2);
	if (sayi1 < sayi2)
	{
		for (i = 1; i <= sayi1; i++)
			toplam+= sayi2;
	}
	printf("%dx%d=%d", sayi1, sayi2,toplam);
	return;
}