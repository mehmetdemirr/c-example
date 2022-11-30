#include<stdio.h>
#include<math.h>
int main()
{
	int sayi,i;
    double yeni;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	/*yeni = log2(sayi);
	if (yeni == (int)yeni)
		printf("%d sayisinin log2 degeri:%.f", sayi, yeni);
	else
		printf("%d sayisinin log2 deger araligi:%.f-%.f",
			sayi, floor(yeni), ceil(yeni));
    */
	i = 1;
	while (pow(2, i) < sayi)
		i++;
	printf("%d sayisinin log2 deger araligi:%d-%d",
		sayi,i-1,i);
}
