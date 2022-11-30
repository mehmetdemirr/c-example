#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
int main(void)
{
	char cumle[100],k;
	int adet=0, i=0;
	float noktali_sayi = 3.4;
	double buyuknoktalisayi;
	bool mehmet=false;
	printf("Cumle giriniz:");
	scanf("%[^\n]s",cumle);
	printf("Aradiginiz karakteri giriniz:");
	scanf("%c",&k);
	while (cumle[i] != '\0')
	{
		if (cumle[i] == k)
			adet++;
		i++;
	}
	printf("\nGirdiginiz cumlede %c harfinden %d tane var.",k,adet);


	return;
}
