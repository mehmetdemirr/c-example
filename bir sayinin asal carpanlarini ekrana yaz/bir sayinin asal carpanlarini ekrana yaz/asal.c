#include<stdio.h>
int asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi; i++)
		if (sayi % i == 0)
			return 0;
	if (i == sayi)
		return 1;
	return 2;
}
void main(void)
{
	int sayi,i;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d", &sayi);
	printf("%d sayisinin asal carpanlari:",sayi);
	for (i = 1; i <= sayi; i++)
		if (sayi % i == 0)
			if (asalmi(i) == 1)
				printf("%d ",i);


}
