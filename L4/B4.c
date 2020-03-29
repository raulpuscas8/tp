#define _CRT_DEFINE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct binar
{
	int x;
	struct binar *urm;
}nod;

nod *adaugare(nod *prim, int k)
{
	nod *q, *p;
	q = (nod *)malloc(sizeof(nod));
	q->x = k;
	q->urm = NULL;

	if (prim == NULL) 
		return q;
	else 
	{
		p = prim;

		while (p->urm != NULL)
		{
			p = p->urm;
		}
		p->urm = q;
		return prim;
	}
}

void afisare(nod *prim)
{
	nod *q;

	q = prim;

	while (q)
	{
		printf("%d ", p->x);
		q = q->urm;
	}
}

int main()
{
	int n, x, *m, nr=0;
	nod *prim;
	prim = NULL;
	printf("n="); 
	scanf("%d", &n);

	while (n) 
	{
	if (n % 2) 
			x = 1;
		else
		{
			x = 0;
			n = n / 2;
			nr++;}
		}
	{
		prim = adaugare(prim, (m + nr));
	}
	afisare(prim);
	return 0;
}
