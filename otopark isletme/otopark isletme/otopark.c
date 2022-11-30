#include <stdio.h>

float ucrethesaplama(float saat)
{
	float ucret;
	if (saat >= 0 && saat < 3)
	{
		ucret = 2;
	}
	else if (saat >= 3 && saat <= 24)
	{
		ucret = 2 + saat * 0.5;
		if (ucret > 10)
		{
			ucret = 10;
		}
	}
	else
		printf("\nHatali saat degeri girdiniz.");
    
	return ucret ;
}
int main()
{
	float s1,s2,s3,u1,u2,u3;
	printf("Lutfen birinci arabanin kac saat park ettigni giriniz:");
	scanf_s("%f",&s1);
	u1 = ucrethesaplama(s1);
	printf("Lutfen ikinci arabanin kac saat park ettigni giriniz:");
	scanf_s("%f",&s2);
	u2 = ucrethesaplama(s2);
	printf("Lutfen ucuncu arabanin kac saat park ettigni giriniz:");
	scanf_s("%f",&s3);
	u3 = ucrethesaplama(s3);
	printf("\nAraba\tSaat\tUcret\n");
	printf("1\t%.2f\t%.2f",s1,u1);
	printf("\n2\t%.2f\t%.2f", s2, u2);
	printf("\n3\t%.2f\t%.2f", s3, u3);
}
