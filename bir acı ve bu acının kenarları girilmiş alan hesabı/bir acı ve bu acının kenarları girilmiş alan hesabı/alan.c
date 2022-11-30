#include<stdio.h>
#include<math.h>
#define PI 3.14
int alanbul(int i, int h, int m);
int main()
{
	int aci, kenar1, kenar2;
	float sonuc;
	printf("Lutfen ucgenin bilinen acisini giriniz:");
	scanf_s("%d", &aci);
	printf("Bu aciyi olusturan kenarlari giriniz:");
	scanf_s("%d%d", &kenar1, &kenar2);
	sonuc=alanbul(aci, kenar1, kenar2);
	printf("Girdiginiz degerlere gore yaklasik olarak ucgenin alani:%.2f",sonuc);
	return;
}
int alanbul(int acı, int kenar1, int kenar2)
{
	float sonuc;
	sonuc = 0.5*kenar1*kenar2*sin(acı *PI/ 180);
	return sonuc;
}