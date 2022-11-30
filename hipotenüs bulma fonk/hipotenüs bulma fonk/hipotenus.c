#include <stdio.h>
#include <math.h>

hipotenus(double kenar1, double kenar2)
{
	double hipotenus;
	hipotenus=pow(kenar1, 2) + pow(kenar2, 2);
	hipotenus = sqrt(hipotenus);
    
	return hipotenus;
 }
int main()
{
	double kenar1, kenar2,sonuc;
	printf("Lutfen ucgenin dik kenarlarini giriniz:");
	scanf_s("%lf %lf", &kenar1, &kenar2);
	sonuc=hipotenus(kenar1, kenar2);
	printf("Girdiginiz dik kenarlara sahip ucgenin hipotenusu:%.2f", sonuc);

	return 0;
}