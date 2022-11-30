#include<stdio.h>
#include<stdlib.h>
float ortalama(int vize, int final);
struct ogrenci
{
	char ad_soyad[20];
	int vize;
	int final;
	float ort;
};
int main(void)
{
	struct ogrenci* kisi;
	int adet, i;
	printf("Lutfen kac ogrenci bilgisi gireceginizi giriniz:");
	scanf("%d", &adet);
	kisi=malloc(sizeof(struct ogrenci)* adet);
	for (i = 0; i < adet; i++)
	{
		printf("\n%d.ogrencinin adini ve soyadini giriniz:",i+1);
		scanf(" %[^\n]s",&kisi->ad_soyad);
		printf("Vize notunu giriniz:");
		scanf("%d",&kisi->vize);
		printf("Final notunu giriniz:");
		scanf("%d", &kisi->final);
		kisi->ort=ortalama(kisi->vize,kisi->final);
		kisi++;
	}
	kisi=kisi-adet-2;
	for (i = 0; i < adet; i++)
	{
		printf("\n%d.ogrenci %s\n", i + 1,kisi->ad_soyad);
		printf("\nVize notu:%d",kisi->vize);
		printf("\nFinal notu:%d",kisi->final);
		printf("\nFinal notu:%.2f", kisi->ort);
		printf("\n--------------------");
		kisi++;
	}
	kisi--;
	free(kisi);
	return;
}
float ortalama(int vize, int final)
{
	float ort;
	ort = vize * 0.4 + final * 0.6;
	return ort;
}