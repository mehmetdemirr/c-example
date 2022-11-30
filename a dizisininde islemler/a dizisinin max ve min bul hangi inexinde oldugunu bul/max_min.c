#include<stdio.h>
int main()
{
	int a[100], i=0,j=0,N,secim,min,max,maxi=0,mini=0,tektoplam=0,ciftcarpim=1;
	Tekrar:
	printf("Lutfen a dizisinin eleman sayisini giriniz(1-100):");
	scanf_s("%d", &N);
	if (N <= 100)
	{
		printf("%d. elemani giriniz:", i + 1);
		scanf_s("%d", &a[i]);
		min = a[i];
		max = a[i];
		for (i =1; i < N; i++)
		{
			printf("%d. elemani giriniz:", i + 1);
			scanf_s("%d", &a[i]);
			if (a[i]>max)
			{
				max = a[i];
				maxi = i;
			}
			else if (a[i]<min)
			{
				min = a[i];
				mini = i;
			}
		}
		printf("\na dizisini ters yazdirma:");
		for (i =N-1; i>=0; i--)
		{
			printf("\n%d.eleman=>%d",j+1,a[i]);
			if (a[i] % 2 == 0)
				ciftcarpim *= a[i];				
			else
				tektoplam += a[i];			
			j++;
		}
    	printf("\n\na dizisinin en kucuk elemani %d konumunda bulunan %d'dir.", mini, min);
		printf("\n\na dizisinin en buyuk elemani %d konumunda bulunan %d'dir.",maxi,max);
		printf("\n\na dizisinin tum tek sayilar toplami:%d",tektoplam);
		printf("\n\na dizisinin tum cift sayilar carpimi:%d",ciftcarpim);
	}
	else
	{
		printf("1-100 arasinda bir sayi girmediniz.");
devam:	printf("\nTekrar denemek icin:1\nCikmak icin\t   :2\n");
		printf("Lutfen secim yapiniz:");
		scanf_s("%d", &secim);
		if (secim == 1)
		{
			goto Tekrar;
		}
		else if (secim == 2)
			return;
		else
		{
			printf("\nHatali tuslama yaptiniz.");
		}
	}
	return;
}