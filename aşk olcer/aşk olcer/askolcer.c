#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	int toplamoran,kalp=3,deger,bd=4,i,secim,toplam[100]={0}, puan,a=3;
	char cevap[20], evet[] ="evet", hayir[] ="hayir";
	printf("%cAsk olcer uygulamama hos geldiniz%c\n", kalp,kalp);
	printf("Oyunun Kurallari\n%cSorulara cevap vermek zorundasiniz.\n"
		"%c Evet=1\n%c Hayir=2\n%c Kararsiz kaldim=3",bd,bd,bd,bd);
	printf("\n\nSorulara baslamak ister misiniz?(Evet/Hayir)\nCevabiniz:");
	scanf("%s",&cevap);
	deger= strlen(cevap);
	for (i = 0; i < deger; i++)
		if (isupper(cevap[i]))
			cevap[i] = tolower(cevap[i]);
	//printf("\nDeneme dizi yazdir:%s\n", cevap);
	if (strcmp(cevap,evet,4)==0)
	{
		for (i = 0; i < 5; i++)
			if (cevap[i] != evet[i])
				break;
		if (i == 5)
		{
			printf("Suanda anda iliskiniz var mi?\n\tCevabiniz:");
			scanf("%d", &secim);
			if (secim == 1)
			{
				printf("Hmmm.iliskin guzel gidiyor mu?\n\tCevabiniz:");
				scanf("%d", &secim);
				if (secim == 1)
				{
					;
					printf("Kardesimmm burada ne isin var:)");
					return;
				}
				else if (secim == 2)
					printf("Yapabilecegim bir sey varsa @mehmetdemir1432 insagram hesabina yazabirsin.");
				else if (secim == 3)
				{
					printf("Kararsiz kaldiysan asagidaki sorulari cevaplayabilirsin.\n");
					printf("Onunla ilk karsilastigin gunu hatirliyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("ilk anda gordugun heyecani her gordugunde yasiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Askiniz icin aglar misiniz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onun varligi sizi mutlu etmeye yetiyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onsuz hayati dusununce cekilmez geliyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gercekten de asik olduguna inaniyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gormek veya sesini duymak istiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Ona ilk yazdiginiz mesaji hatirliyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gun icinde merak ediyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onu kiskaniyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					puan = toplam[1] * 10 + toplam[2] * 3 + toplam[3] * 6;
					printf("\n %c Yuzde %d asiksiniz. %c", a, puan, a);
				}
				else
					printf("Hatali giris yaptiniz.");
			}
			else if (secim == 2)
			{
				printf("Suanda birilerinden hoslaniyor musunuz?\n\tCevabiniz:");
				scanf("%d", &secim);
				if (secim == 1)
				{
					printf("Onunla ilk karsilastigin gunu hatirliyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("ilk anda gordugun heyecani her gordugunde yasiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Askiniz icin aglar misiniz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onun varligi sizi mutlu etmeye yetiyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onsuz hayati dusununce cekilmez geliyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gercekten de asik olduguna inaniyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gormek veya sesini duymak istiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Ona ilk yazdiginiz mesaji hatirliyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gun icinde merak ediyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onu kiskaniyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					puan = toplam[1] * 10 + toplam[2] * 3 + toplam[3] * 6;
					printf("\n %c Yuzde %d asiksiniz. %c",a, puan,a);
				}
				else if (secim == 3)
				{
					printf("Hadi ama lutfen dogruyu soyle illaki birileri vardir aklinda.\n");
					printf("Onunla ilk karsilastigin gunu hatirliyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("ilk anda gordugun heyecani her gordugunde yasiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Askiniz icin aglar misiniz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onun varligi sizi mutlu etmeye yetiyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onsuz hayati dusununce cekilmez geliyor mu?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gercekten de asik olduguna inaniyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gormek veya sesini duymak istiyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Ona ilk yazdiginiz mesaji hatirliyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Gun icinde merak ediyor musun?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					printf("Onu kiskaniyor musunuz?\n\tCevabiniz:");
					scanf("%d", &secim);
					++toplam[secim];
					puan = toplam[1] * 10 + toplam[2] * 3 + toplam[3] * 6;
					printf("\n %c Yuzde %d asiksiniz. %c", a, puan, a);
				}
				else if (secim == 2)
				{
					printf("iliskin ve hoslandigin kisi olmadigi icin maalesef askini olcemedim.");
					return;
				}
				else
					printf("Hatali tuslama yaptiniz.");
				if (puan > 80)
				{
					printf("\n\n   %c       %c\n"
						" %c   %c   %c  %c\n"
						"  %c   %c %c  %c\n"
						"    %c     %c\n"
						"     %c   %c \n"
						"       %c\n",a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
				}
			}

		}
		else
			printf("\n4 karakterli hatali giris!");
	}
	else if (strncmp(cevap,hayir,5)==0)
	{
		for(i = 0; i < 6; i++)
			if (cevap[i] != hayir[i])
				break;
		if(i == 6)
			printf("\nLutfen cikmak icin bir tusa basiniz.");
		else
			printf("\n5 karakterli hatali giris!");			
	}
	else
		printf("\nHatali giris yaptiniz!\nLutfen evet ya da hayir giriniz.");
		return;
}