#include <stdio.h>
int main()
{
	char islem;
	float sayi1, sayi2;
	printf("Lutfen bir islem isareti giriniz(+,-,*,/):");
	scanf("%c",&islem);
	switch (islem)
	{ 
	case '+':
		  printf("Lutfen iki ondalikli sayi giriniz:\n");
		  scanf("%f %f", &sayi1,&sayi2);
		  printf("%0.2f + %0.2f = %0.2f \n", sayi1, sayi2, sayi1 + sayi2);
		  break;
	case '-':
		  printf("Lutfen iki ondalikli sayi giriniz:\n");
		  scanf("%f %f",&sayi1, &sayi2);
		  printf("%0.2f - %0.2f = %0.2f \n", sayi1, sayi2, sayi1 - sayi2);
		  break;
	case '/':
		printf("Lutfen iki ondalikli sayi giriniz:\n");
		scanf("%f %f",&sayi1, &sayi2);
		printf("%0.2f / %0.2f = %0.2f \n", sayi1, sayi2, sayi1 / sayi2);
		break;
	case '*':
		  printf("Lutfen iki ondalikli sayi giriniz:\n");
		  scanf("%f %f", &sayi1, &sayi2);
		  printf("%0.2f * %0.2f = %0.2f \n", sayi1, sayi2, sayi1 * sayi2);
		  break;
	default:
		printf("Yanlis bir islem girdiniz.\nLutfen tekrar deneyiniz...\n");
	}
	return 0;
}