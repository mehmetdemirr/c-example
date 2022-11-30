#include <stdio.h>
int katimi(int sayi1, int sayi2)
{
	/*Bu fonksiyonda sayi2,sayi1 katı olup olmadiğına bakılır.*/
	int mod = sayi1 % sayi2;
	if (mod == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int sayi1, sayi2, sonuc;
	printf("ikinci girdiginiz sayi ilk girdiginiz sayinin kati mi?");
	printf("\nLutfen ilk sayiyi giriniz:");
	scanf_s("%d", &sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf_s("%d", &sayi2);
	sonuc = katimi(sayi1, sayi2);
	if (sonuc == 1)
		printf("\nEVET\n");
	else
		printf("\nHAYIR\n");
	return;



}