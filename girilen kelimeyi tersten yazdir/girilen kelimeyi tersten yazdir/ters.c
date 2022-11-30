#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BOYUT 100
int main()
{
	char kelime[BOYUT];
	int i,uzunluk;
	printf("Lutfen bir cumle giriniz:");
	gets(kelime);
	uzunluk = strlen(kelime);
	printf("Cumlenin tersten yazilisi:\n");
	for(i=uzunluk;i>=0; i--)
		printf("%c",kelime[i]);
	return;
}