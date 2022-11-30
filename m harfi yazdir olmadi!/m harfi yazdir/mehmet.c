#include<stdio.h>
int main()
{
	int sutun=1,satir=10,i,j,b,k=2,m;
	for (i = 1;i <=sutun;i++)
	{
		for (j = 1; j <=satir; j++)
		{
			printf("*");
			for (b = 1; b <= k; b++)
			
				printf(" ");
			printf("*");
			for (m = 1; m <= 20 - k * 2; m++)
				printf(" ");
			for (b = 1; b <= k; b++)
				printf(" ");
			printf("*");
			printf("\n");
			k+=2;
		}
	}
	return;
}