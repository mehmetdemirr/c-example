#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct tas
{
	int sayi;
	char* renk;
};
typedef struct tas Tas;
int main()
{
	printf("NOT:1.oyuncu baslayacak fazla tas 1.oyuncuda.\n");
	srand(time(NULL));
	Tas tas[106],gecici,okey;
	int i, j;
	const char* renk[] = {"siyah", "kirmizi", "sari","mavi","sahte"};
	const int* sayi[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,0 };
	for (i = 0; i < 106; i++)
	{
		if (i <104)
		{
			tas[i].sayi = sayi[i / 8];
			tas[i].renk = renk[i % 4];
		}
		else
		{
			tas[i].sayi = sayi[13];
			tas[i].renk = renk[4];
		}

	}
	for (i = 0; i < 106; i++)
	{
		j = rand() % 106;
		gecici = tas[i];
		tas[i] = tas[j];
		tas[j] = gecici;
	}
	j = rand()%106;
	while(tas[j].sayi == 13)
		j = rand() % 106;
	//printf("%d\n", j);
	okey = tas[j];
	printf("Ortadaki tas =>%d %s\n", okey.sayi, okey.renk);
	printf("Okey=>%d %s",okey.sayi%13+1, okey.renk);
	printf("\n1.oyucu\t\t2.oyuncu\t3.oyuncu\t4.oyuncu\tOrtadaki taslar");
	for (i = 0; i <106; i++)
	{
		if (i % 5 == 0)
			printf("\n%2d %7s", tas[i].sayi, tas[i].renk);
		else if (i == j);
		else
			printf("\t%2d %7s", tas[i].sayi, tas[i].renk);
	}
	return;
}