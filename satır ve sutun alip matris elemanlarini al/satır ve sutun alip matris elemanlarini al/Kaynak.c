#include<stdio.h>
void main()
{
	int satir, sutun, i, j,matris[100][100];
	printf("Gireceginiz matrisin satir sayisini giriniz:");
	scanf_s("%d",&satir);
	printf("Gireceginiz matrisin sutun sayisini giriniz:");
	scanf_s("%d", &sutun);
	printf("\n");
	for (i = 0; i < satir; i++)
		for (j = 0; j < sutun; j++)
		{
			printf("matris[%d][%d] giriniz:", i, j);
			scanf_s("%d",&matris[i][j]);
		}
	printf("Matrisin gosterimi:\n");
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			printf("%d    ",matris[i][j]);
		}
		printf("\n");
	}
}