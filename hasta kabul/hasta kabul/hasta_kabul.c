#include<stdio.h>
struct hastalar
{
	char adsoyad[30];
	int yas;
	int bolum;
}hasta[100];
void bolumler()
{
	printf("\n1-Cildiye\t2-Kardiyoloji\t3-KBB\t4-Goz\t5-Psikiyatri\n");
}
int secim(int s)
{
	printf("\nHastanin gidecegi bolum:");
	switch (s)
	{
	case 1:printf("Cildiye"); break;
	case 2:printf("Kardiyoloji"); break;
	case 3:printf("KBB"); break;
	case 4:printf("Goz"); break;
	case 5:printf("Psikiyatri"); break;
	default: printf("---------");
	}
	printf("\n");
}
void hastabilgial(int h[])
{
	printf("\n------------------------------\n");
	printf("\nHasta adini ve soyadini giriniz:");
	scanf("%[^\n]s",&h[1].adsoyad);

}
void main()
{
	int i,secim;
	struct hastalar hasta[100];
	printf("Hasta kayit etmek icin 1'i tuslayiniz:");
	scanf("%d", &secim);
	if (secim == 1)
	{
		
	}






}