#include <stdio.h>
int main()
{
    int secim, sayi1, sayi2,bolum,fark,toplama,carpma;
    printf("\nToplama islem:1");
    printf("\nCarpma islem :2");
    printf("\nBolme islemi :3");
    printf("\nCikartma islemi:4");
   tekrar: printf("\n\nLutfen secim yapiniz:");
    scanf_s("%d", &secim);
    switch (secim)
    {
    case 1:
        {
            printf("Lutfen iki sayi giriniz:\n");
            scanf_s("%d", &sayi1);
            scanf_s("%d", &sayi2);
            toplama = sayi1 + sayi2;
            printf("\nSayilarin toplami:%d",toplama );
            if (toplama == 31)
                printf("\a\a\a\nkmkmkmxkxmkxm");

            break;
        } 
    case 2:
        {
            printf("Lutfen iki sayi giriniz:\n");
            scanf_s("%d", &sayi1);
            scanf_s("%d", &sayi2);
            carpma = sayi1 * sayi2;
            printf("\nSayilarin carpimi:%d",carpma);
            if (carpma == 31)
                printf("\a\a\a\nkmkmkmxkxmkxm");
            break;
        }
    case 3:
        {
            printf("Lutfen iki sayi giriniz:\n");
            scanf_s("%d",&sayi1);
            scanf_s("%d", &sayi2);
            bolum = (float)sayi1 / (float)sayi2;
            printf("\nSayilarin bolumu:%.2f",bolum);
            if (bolum== 31)
                printf("\a\a\a\nkmkmkmxkxmkxm");
            break;
        }
    case 4:
        {
            printf("Lutfen iki sayi giriniz:\n");
            scanf_s("%d", &sayi1);
            scanf_s("%d", &sayi2);
            fark = sayi1 - sayi2;
            printf("\nSayilarin farki:%d",fark );
            if (fark == 31)
                printf("\a\a\a\nkmkmkmxkxmkxm");
            break;
        }
    default:
            printf("\nHatali tuslama yaptiniz.Tekrar deneyiniz.");
        break;
    }
    return 0;
}