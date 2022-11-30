#include<stdio.h>
#include<string.h>
#define BOYUT 50
void polindrom(char dizi[]);
int main()
{
	char kelime[BOYUT];
	printf("Lutfen bir kelime giriniz:");
	gets(kelime);
	polindrom(kelime);
	return;
}
 void polindrom(char dizi[])
{
	int i,m=0,uzunluk;
	uzunluk = strlen(dizi);
	for (i = uzunluk-1; i >(uzunluk-1)/ 2; i--)
		if (dizi[i] != dizi[m])
			break;
		else
			m++;
	if (i == (uzunluk-1)/2)
		printf("Girdiginiz kelime polindromdur.");
	else
		printf("Girdiginiz kelime polindrom degildir.");
}