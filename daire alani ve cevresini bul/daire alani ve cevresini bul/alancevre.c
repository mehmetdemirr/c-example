#include<stdio.h>
#include<math.h>
void secim()
{
	printf("1-Daire\n2-Dik ucgen\n3-Kare\n4-Dikdortgen\n5-Eskenar dortgen\n"
		"6-Duzgun besgen\n");
	printf("\nLutfen secim yapiniz:");
}
void main()
{
	int sayi,r,a,b,c;
	secim();
	scanf_s("%d",&sayi);
	switch (sayi)
	{
	case 1:printf("Lutfen dairenin yaricapini girin:");
		scanf_s("%d", &r);
		printf("Dairenin alani:%d\nDairenin cevresi:%d", 3 * r * r, 2 * 3 * r);
		break;
	case 2:printf("Lutfen dik kenarlarini girin:");
		scanf_s("%d %d", &a, &b);
		c = sqrt(a * a + b * b);
		printf("Dik ucgenin alani:%d\nDik ucgenin cevresi:%d", a * b / 2, a + b +c);
		break;
	case 3:printf("Lutfen karenin bir kenarini girin:");
		scanf_s("%d", &r);
		printf("Karenin alani:%d\nKarenin cevresi:%d", r * r, 4 * r);
		break;
	case 4:printf("Lutfen dikdortgenin kisa ve uzun kenarlarini giriniz:");
		scanf_s("%d %d", &a, &b);
		printf("Dikdortgenin alani:%d\nDikdorgenin cevresi:%d", a * b, 2 * (a + b));
		break;
	case 5:printf("Lutfen eskenar dortgenin bir kenarini girin:");
		scanf_s("%d", &r);
		printf("Lutfen eskenar dotgenin yuksekligini girin:");
		scanf_s("%d", &a);
		printf("Eskenar dortgenin alani:%d\nEskenar dortgenin cevresi:%d",a*r , 4 * r);
		break;
	case 6:printf("Lutfen duzgun besgenin bir kenarini girin:");
		scanf_s("%d", &r);
		printf("Duzgun besgenin alani:%.2f\nDuzgun besgenin cevresi:%d"
			, sqrt(25 + 10 * sqrt(5)) / 4.0 * pow(r, 2), 5 * r);
		break;
	default:
		printf("Hatali secim yaptiniz.\nLutfen tekrar deneyiniz.");
	}
}