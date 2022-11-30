#include<stdio.h>
#include<string.h>
int main(void)
{
	char toplanti_yeri[10];
	printf("Lutfen toplanti yapacagimiz yeri giriniz:");
	gets(toplanti_yeri);
	if (strcmp(toplanti_yeri,"Cafe") == 0)
		printf("\nToplantimizi cafede yapiyoruz.");
	else if (strcmp(toplanti_yeri,"Okul") == 0)
		printf("\nToplantimizi okulda yapiyoruz.");
	else
		printf("\nKonum bulunamadi.");
	return;
} 
