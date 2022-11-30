#include<stdio.h>
int main()
{
	int not1,adet,dogru;
	printf("NOT:Her sinav 20 sorudur.\n");
	printf("Lutfen matematk sinavindan yaptiginiz soru sayisini giriniz:");
	scanf("%d",&adet);
	while (adet > 20 || adet <0)
	{
		printf("Lutfen tekrar matematik sinavindan yaptiginiz soru sayisini giriniz:");
		scanf("%d", &adet);
	}
	printf("Dogru sayisini giriniz:");
	scanf("%d", &dogru);
	if (dogru <= adet)
	{
		not1 = dogru * 5;
		printf("Sinavdan aldiginiz not:%d", not1);
		if (not1 >= 50)
			printf("\nTebrikler.\nDersi gectiniz.");
		else
			printf("\nDersten kaldiniz.");
	}
	else
		printf("Dogru sayisi cozdugunuz soru sayisini asamaz!");
	return;
}