#include <stdio.h>
int main()
{
    int sayi,toplam=0;
    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);
    for (int i = 0; i <= sayi; i++)
    {
        toplam += i;
    }
    printf("1'den %d'ye kadar olan sayilarin toplami:%d", sayi, toplam);
    return 0;





}