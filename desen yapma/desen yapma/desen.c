#include <stdio.h>
int kenar(int kenar)
{
	int i,j;
	for (i = 1; i <= kenar; i++)
	{
		for (j = 1; j <= kenar; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int sayi,sonuc;
	printf("Lutfen kare yapmak icin kenar sayiyisini giriniz:");
	scanf_s("%d",&sayi);
	sonuc =kenar(sayi);
	return;
}