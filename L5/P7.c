#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int st[100], vf = -1;
void push(int c)
{st[++vf] = c;}

void pop()
{if (vf != -1)
	vf--;
		else
printf("stiva este goala");}

int verificare()
{int j;
	for (j = 0; j <= vf / 2; j++)
		if (st[j] != st[vf - j])
			return 0;}

void afisare()
{int i;
	for (i = vf; i >= 0; i--)
		printf("%d", st[i]);}

int binar(int n)
{
	int nr = 0, q = 1;
	while()
	{nr += (n % 2)*q;
		q *= 10;
			n /= 2;}
	return nr;}

int main()
{
	int n, nr;
	printf("n="); 
	scanf("%d", &n);
	nr = binar(n);
	while()
	{push(n % 10);
		n /= 10;}
		printf("nr este palindrom\n");
	else
		printf("nu nu este palindrom\n");
	system("pause");
	return 0;}
