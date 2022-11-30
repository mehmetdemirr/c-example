#include<stdio.h>
#include<stdlib.h>
struct dugum 
{
	int veri;
	struct dugum* p;
};
int main()
{
	struct dugum *liste;
	liste = (struct dugum *)malloc(sizeof(struct dugum));
	struct dugum* liste1;
	liste1 = (struct dugum *)malloc(sizeof(struct dugum));
	struct dugum* liste2;
	liste2 = (struct dugum *)malloc(sizeof(struct dugum));
	liste->veri = 23;
	liste->p =liste1;
	liste1->veri = 46;
	liste1->p = liste2;
	liste2->veri = 69;
	liste2->p = NULL;

	printf("%d\n", liste->veri);
	printf("%d\n", liste1->veri);
	printf("%d\n", liste2->veri);
}