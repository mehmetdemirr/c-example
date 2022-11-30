#include <stdio.h>
int obeb(int sayi1, int sayi2)
{
	while (sayi1 != sayi2)
	{
		if (sayi1 > sayi2)
		{
			sayi1 = sayi1 - sayi2;
		}
		else
			sayi2 = sayi2 - sayi1;

	}
	return sayi2;
}
int main()
{
	int sayi1, sayi2,sonuc;
	printf("NOT:Programimiz iki sayi alip bu sayilarin OBEB'ini verir.\n");
	printf("Lutfen iki sayi giriniz:");
	scanf_s("%d %d", &sayi1, &sayi2);
	sonuc = obeb(sayi1, sayi2);
	printf("\n%d ve %d sayilarinin en buyuk ortak boleni %d'dir.", sayi1, sayi2, sonuc);
	return;
}
