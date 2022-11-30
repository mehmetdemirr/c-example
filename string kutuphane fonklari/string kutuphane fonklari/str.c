#include<stdio.h>
#include<string.h>
#define BOYUT 100
int menubastir();
void main(void)
{
	int sayi,secim;
	char cumle1[BOYUT], cumle2[BOYUT];
	printf("Lutfen cumle1 giriniz:");
	scanf("%s", cumle1);
	printf("Lutfen cumle2 giriniz:");
	scanf("%s", cumle2);
	secim=menubastir();
	switch (secim)
	{
	case 1:strcat(cumle1, cumle2);
		printf("cumle1:%s\n", cumle1);
		printf("cumle2:%s", cumle2);
		break;
	case 2:strcpy(cumle1, cumle2);
		printf("cumle1:%s\n", cumle1);
		printf("cumle2:%s", cumle2);
		break; 
	case 3:printf("cumle1 karakter uzunlugu:%d\n", strlen(cumle1));
		printf("cumle2 karakter uzunlugu:%d", strlen(cumle2));
		break;
	default:
		printf("Hatali tuslama yaptiniz!");
	}
	
}
int menubastir()
{
	int s;
	printf("1-cumle1 ile cumle2 yi birlestir\n2-cumle2'yi cumle1'e kopyala\n");
	printf("3-cumle1 ve cumle2 karakter uzunlugu\n");
	printf("Lutfen secim yapiniz:");
	scanf("%d",&s);
	return s;
}