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
	nod *p, *q;
	p = (nod *)malloc(sizeof(nod));
	p->x = k;
	p->urm = NULL;

	if (prim == NULL) 
		return p;
	else 
	{
		q = prim;

		while (q->urm != NULL)
		{
			q = q->urm;
		}
		q->urm = p;
		return prim;
	}
}

void afisare(nod *prim)
{
	nod *p;

	p = prim;

	while (p)
	{
		printf("%d ", p->x);
		p = p->urm;
	}
}

int main()
{
	int n, k, *v, nr=0;
	nod *prim;
	prim = NULL;
	printf("n="); 
	scanf("%d", &n);

	while (n) 
	{
		if (n % 2) 
			k = 1;
		else
		{
			k = 0;
			(v + nr) = k;
			n = n / 2;
			nr++;
		}
	}
	while (nr >= 0)
	{
		prim = adaugare(prim, (v + nr));
	}
	afisare(prim);
	return 0;
}
