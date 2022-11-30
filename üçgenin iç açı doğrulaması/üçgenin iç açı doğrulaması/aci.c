#include <stdio.h>

int main()
{ 
	int aci1, aci2, aci3,toplam;
	printf("Lutfen ucgenin ic acilarini giriniz:\n");
	scanf_s("%d  %d  %d", &aci1, &aci2, &aci3);
	toplam = aci1 + aci2 + aci3;
	if (toplam == 180 && aci1>0 && aci2>0 && aci3>0)
		printf("\nUcgen gecerlidir");
	else
		printf("\nUcgen gecersizdir.");
	return 0;




}