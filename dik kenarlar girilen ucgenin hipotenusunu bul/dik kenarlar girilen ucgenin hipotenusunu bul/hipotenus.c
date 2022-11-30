#include<stdio.h>
#include<math.h>
int main()
{
	float kenar1, kenar2, hipotenus;
	printf("Lutfen ucgenin dik kenarlarinin giriniz:");
	scanf_s("%f%f", &kenar1, &kenar2);
	hipotenus = pow(kenar1,2) + pow(kenar2,2);
	printf("%.2f ve %.2f dik kenarlar sahip ucgenin hipotenusu=>%.2f", kenar1, kenar2,sqrt(hipotenus));
	return;
}