#include<stdio.h>
int main()
{
	int sayi1, sayi2,max,i,ekok;
	printf("sayi1 giriniz:");
	scanf("%d",&sayi1);
	printf("sayi2 giriniz:");
	scanf("%d",&sayi2);
	printf("%d ve %d ekok:", sayi1, sayi2);
	if (sayi1 > sayi2)
		max = sayi1;
	else
		max= sayi2;
	for (i = max; i <=sayi1*sayi2; i++)
		if (i % sayi1 == 0 && i % sayi2 == 0)
		{
			ekok = i;
			break;
		}
	printf("%d",ekok);

	return;
}