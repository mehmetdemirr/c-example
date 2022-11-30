#include<stdio.h>
int main()
{   int a, b,c;
	printf("a sayisinin degerini giriniz:");
	scanf_s("%d", &a);
	printf("b sayisinin degerinin giriniz:");
	scanf_s("%d", &b);
	if (a > 50 && b > 50)
	{
		printf("Giridiginiz a ve b sayilarinin toplami %d'dir.", a + b);
	}
	else
		printf("Bu islemi yapmak a ve sayilari uygun degildir.\n"
			"Tekrar deneyininz...");
	return;
}