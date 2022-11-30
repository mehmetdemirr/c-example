#include<stdio.h>
#include<math.h>
#define BOYUT 10
int main(void)
{
	int sayi,basamak[BOYUT],i=0,yenisayi=0,k=0,csayi,m,l;
	//printf("Lutfen bir sayi giriniz:");
	//scanf("%d",&sayi);
	//csayi = sayi;
	printf("Bu kosulu saglayan sayi:");
	for (m = 1000; m < 10000; m++)
	{
		l = m;
		while (m!= 0)
		{
			basamak[i++] = m % 10;
			m/= 10;
		}
		i--;
		//printf("birler:%d\nbonlar:%d\nyuzler:%d\n\n", basamak[0], basamak[1], basamak[2]);
		while (i >= 0)
		{
			yenisayi += pow(10, i) * basamak[k];
			k++;
			i--;
		}
		//printf("yeni sayi:%d",yenisayi);
		yenisayi *= 4;
		if (yenisayi == l)
		{
			printf(" %d",l);
			return;
		}
	}
	return;
}