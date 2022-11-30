#include<stdio.h>
void dizidoldur(float s[],int sayi);
void diziyazdir(float s[], int sayi);
int main()
{
	int sayi;
	float dizi[100];
	printf("Diziye kac eleman yerlestireceksiniz:");
	scanf("%d",&sayi);
	dizidoldur(dizi, sayi);
	printf("\nGirdiginiz dizinin elemanlari:");
	diziyazdir(dizi, sayi);
	return;
}
void dizidoldur(float s[],int sayi)
{
	int i;
	for (i = 0; i < sayi; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%f",&s[i]);
	}
}
void diziyazdir(float s[], int boyut)
{
	int i;
	for (i = 0; i <boyut; i++)
		printf("\n%d.elemani->%.2f",i+1,s[i]);
}