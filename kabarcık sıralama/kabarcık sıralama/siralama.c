#include<stdio.h>
int main()
{
	int adet, sayi[20],i,j,gecici;
	printf("NOT:Girilen sayilari kucukten buyuge dogru siralanmaktadir.\n");
	printf("Lutfen kac adet sayi gireceksiniz(1-20):");
	scanf_s("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d. sayiyi girin:",i+1);
		scanf_s("%d",&sayi[i]);
	}
	for (j = 0; j< adet - 1; j++)
	{
		for (i = 0; i < adet - 1-j; i++)
		{
			if (sayi[i] > sayi[i + 1])
			{
				gecici = sayi[i];
				sayi[i] = sayi[i+1];
				sayi[i+1]=gecici;
			}
		}
	}
	printf("\nSayilarin siralanmis hali:");
	for (i = 0; i < adet; i++)
	{
		if(i!=adet-1)
			printf("%d <", sayi[i]);
		else
			printf(" %d ", sayi[i]);
	}
	return;
}