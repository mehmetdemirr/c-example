#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#define BOYUT 101
int  oda1 = 500, oda2 = 400, oda3 = 300, oda4 = 200, oda5 = 100;
int odalar[BOYUT] = { 0 };
int secim()
{
	int sec;
	printf("1-Oda rezervasyonu\n2-Rezervasyon iptali\n3-Yapilan rezervasyonlari gosterme\n"
		"4-Otelin geliri\n");
	printf("Lutfen secim yapiniz:");
	scanf("%d", &sec);
	return sec;
}
int odanotercihen(int sayi)
{
	int oda, sec;
	printf("Tercihen kalmak istediginiz oda var mi?(Evet=1/Hayir=2)");
	scanf("%d", &sec);
	if (sec == 1)
	{
		switch (sayi)
		{
		case 1:printf("\n1.sinif odalar:1-20");
			printf("\nLutfen oda numaranizi giriniz:");
			scanf("%d", &oda);
			if (oda > 0 && oda < 21)
			{
				if (odalar[oda] == 0)
					printf("%d. odaya rezarvasyonunuz alinmistir.",oda);
				else
					printf("Maalesef oda dolu.");
			}
			else
				printf("Lutfen 1-20 arasindaki odalardan seciniz.");
			break;
		case 2:	printf("\nNOT:2.sinif odalar:21-40");
			printf("\nLutfen oda numaranizi giriniz:");
			scanf("%d", &oda);
			if (oda > 20 && oda < 41)
			{
				if (odalar[oda] == 0)
					printf("%d. odaya rezarvasyonunuz alinmistir.",oda);
				else
					printf("Maalesef oda dolu.");
			}
			else
				printf("Lutfen 21-40 arasindaki odalardan seciniz.");
			break;
		case 3:	printf("\n3.sinif odalar:41-60");
			printf("\nLutfen oda numaranizi giriniz:");
			scanf("%d", &oda); 
			if (oda > 40 && oda < 61)
			{
				if (odalar[oda] == 0)
					printf("%d. odaya rezarvasyonunuz alinmistir.", oda);
				else
					printf("Maalesef oda dolu.");
			}
			else
				printf("Lutfen 41-60 arasindaki odalardan seciniz.");
			break;
		case 4:	printf("\n4.sinif odalar:61-80");
			printf("\nLutfen oda numaranizi giriniz:");
			scanf("%d", &oda);
			if (oda > 60 && oda < 81)
			{
				if (odalar[oda] == 0)
					printf("%d. odaya rezarvasyonunuz alinmistir.", oda);
				else
					printf("Maalesef oda dolu.");
			}
			else
				printf("Lutfen 61-80 arasindaki odalardan seciniz.");
			break;
		case 5:	printf("\n5.sinif odalar:81-100");
			printf("\nLutfen oda numaranizi giriniz:");
			scanf("%d", &oda);
			if (oda > 80 && oda < 100)
			{
				if (odalar[oda] == 0)
					printf("%d. odaya rezarvasyonunuz alinmistir.", oda);
				else
					printf("Maalesef oda dolu.");
			}
			else
				printf("Lutfen 81-100 arasindaki odalardan seciniz.");
			break;
		}
		return oda;
	}
	else
		printf("\nPeki.Tesekkurler.\n");
	return;
}
int oda_sec()
{
	int sec;
	printf("\n1.sinif odanin fiyati=>500"); //1-20
	printf("\n2.sinif odanin fiyati=>400"); //21-40
	printf("\n3.sinif odanin fiyati=>300"); //41-60
	printf("\n4.sinif odanin fiyati=>200"); //61-80
	printf("\n5.sinif odanin fiyati=>100"); //81-100
	printf("\nLutfen hangi sinif odada kalacaginizi giriniz:");
	scanf("%d", &sec);
	odanotercihen(sec);
	return sec;
}
int tarih()
{
	int zaman=time(0),yil,ay,gun;
	ay = zaman % (365 * 24 * 60 * 60);
	yil = zaman / (365 * 24 * 60 * 60);
	gun = ay % (30 * 24 * 60 * 60);
	gun /= 24 * 60 * 60;
	ay /= 30 * 24 * 60 * 60;
	printf("takvim:%d/%d/%d",gun,ay,yil+1970);
	printf("\nLutfen rezervasyon yapacaginiz tarihi giriniz:");
}
int main()
{
	int odalar[BOYUT]={0}, i,deger,oda,oda_numarasi,onay;
	char ad_soyad[30];
	//dolu oda 1
	//bos oda 0
	deger = secim();
	switch (deger)
	{

	case 1://oda secimi
		printf("\tODA REZARVASYONU\n");
		printf("Lutfen adinizi ve soyadinizi giriniz:");
		oda = oda_sec();
		switch (oda)
		{
		case 1: printf("%d TL onayliyor musunuz?",oda1);
			printf("\nEvet icin=>1   Hayir icin=>2");
			printf("\nLutfen secimizi giriniz:");
			scanf("%d", &onay);
			break;
		case 2: printf("%d TL onayliyor musunuz?",oda2);
			printf("\nEvet icin=>1   Hayir icin=>2");
			printf("\nLutfen secimizi giriniz:");
			scanf("%d", &onay);
			break;
		case 3: printf("%d TL onayliyor musunuz?",oda3);
			printf("\nEvet icin=>1   Hayir icin=>2");
			printf("\nLutfen secimizi giriniz:");
			scanf("%d", &onay);
			break;
		case 4: printf("%d TL onayliyor musunuz?",oda4);
			printf("\nEvet icin=>1   Hayir icin=>2");
			printf("\nLutfen secimizi giriniz:");
			scanf("%d", &onay);
			break;
		case 5: printf("%d TL onayliyor musunuz?",oda5);
			printf("\nEvet icin=>1   Hayir icin=>2");
			printf("\nLutfen secimizi giriniz:");
			scanf("%d", &onay);
			break;
		default:
			printf("\nHatali secim yaptiniz.");
		}
		if (onay == 1)
			printf("isleminiz onaylanmistir.");
		else
			printf("isleminiz iptal edilmistir.");
		break;
	case 2:
		printf("\tREZERVASYON iPTALi");
		printf("Lutfen oda numaranizi giriniz:");
		scanf("%d",&oda_numarasi);
		printf("Adinizi ve soyadinizi giriniz:");
		scanf("%[^\n]s",&ad_soyad);




		break;




	case 3:
		printf("\tYAPiLAN REZERVASYONLARi GOSTERME\n");




		break;



	case 4:
		printf("\tOTELiN TOPLAM GELiRi\n");





		break;



	default:
		printf("\nHatali secim yaptiniz.");
	}
	return;
}