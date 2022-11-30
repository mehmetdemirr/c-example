#include<stdio.h>
#define SATIR 3 
#define SUTUN 3 
int main()
{
	int  M[SATIR][SUTUN] = {
 {2, 3, 7},
 {5, 7, 6},
 {2, 1, 8} }, i, j, toplam;
	for (i = 0; i < SUTUN; i++)
	{
		toplam = 0;
		for (j = 0; j < SATIR; j++)
		{
			toplam += M[i][j];

		}
		printf("%d.satirdaki sayilarin toplami:%d\n", i + 1, toplam);
	}
	
			
	
	return;
}