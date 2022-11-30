#include<stdio.h>
#include<ctype.h>
void buyukharfcevir(char *hptr);
int main()
{
	char dizi[100];
	printf("Lutfen diziyi giriniz:");
	gets(dizi);
	buyukharfcevir(dizi);
	printf("Dizi:%s", dizi);
	printf("\nDizinin boyutu:%d",sizeof(dizi));
	return;
} 
void buyukharfcevir(char *hptr)
{
	while (*hptr != '\0')
	{
		if (islower(*hptr))
			*hptr=toupper(*hptr);
		hptr++;
	}
}