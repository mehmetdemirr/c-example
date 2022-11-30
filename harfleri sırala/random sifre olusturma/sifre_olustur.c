#include<stdio.h>
#include<string.h>
void main(void)
{
	char cumle[100],gecici;
	int deger, i,j;
	printf("Lutfen bir cumle giriniz:");
	gets(cumle);
	deger = strlen(cumle);
	for(j=0;j<deger-1;j++)
		for(i=0;i<deger-1-j;i++)
			if (cumle[i] > cumle[i + 1])
			{
				gecici = cumle[i];
				cumle[i] = cumle[i + 1];
				cumle[i + 1] = gecici;
			}
	printf("Yazdiginiz cumleyi alfabetik sirayla harf harf yazdırma:");
	for (i = 0; i < deger; i++)
		printf("\n%c",cumle[i]);
}