#include<stdio.h>
void main(void)
{
    FILE* dosya;
    dosya = fopen("C:\\Users\\ddddddd\\Desktop\\deneme","w+");
    if (dosya == NULL)
        printf("Dosya acilamadi!");
    else
    {
        fprintf(dosya,"Mehmet demir ");
        fclose(dosya);
    }

}