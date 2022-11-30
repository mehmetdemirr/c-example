#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c,delta;
	printf("NOT:a2x+bx+c seklinde yazilan denklemin koklerini bulmak\n");
	printf("Lutfen sirayla a,b ve c sayilarini girin:");
	scanf_s("%f%f%f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta > 0)
		printf("1.kok:%.2f\n2.kok:%.2f", -b + sqrt(delta) / 2 * a, -b - sqrt(delta) / 2 * a);
	else if (delta == 0)
		printf("Cift katli kok vardir.\bKok:%.2f", -b + sqrt(delta) / 2 * a);
	else
		printf("Gercel kokleri yoktur.");
}