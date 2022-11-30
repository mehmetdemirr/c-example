#include<stdio.h>
#include<stdlib.h>
void main()
{
	const char *kelime= "1234567zmehmetjhbhttut87896";
	char *ptr;
	int sayi;
	sayi=strtol(kelime,&ptr,0);
	printf("sayi:%d\n", sayi);
	printf("String:%s",ptr);
}