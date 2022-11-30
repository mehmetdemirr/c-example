#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i,deger;
	char sifre[100];
	printf("Lutfen sifrenizi 6 tane rakamdan olusturunuz.\n");
	printf("Sifreniz:");
	gets(sifre);
	deger = strlen(sifre);
	if(deger == 6)
	{
		for (i = 0; i < 6; i++)
			if (isdigit(sifre[i]));
			else
				break;
		if (i == 6)
			printf("Basariyla sifreniz olusturulmustur.\nSifreniz:%s",sifre);
		else
			printf("Basarisiz.\nSifrede rakam haricinde bir karakter bulundu.");
	}
	else
	printf("Lutfen 6 tane rakamdan olusan sifre giriniz.");
}