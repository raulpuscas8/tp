#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stiva[MAX], vf = -1;
void push(int x)
{
	if (plina())
	{
		printf("Stiva e plina.\n");
	}
	else
	{
		vf++;
		stiva[vf] = x;
		printf("numarul %d a fost introdus in stiva\n", x);
	}
}
int plina()
{
	if (vf == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	int n, a = 0, b, v, opt;
	while (1)
	{
		printf("1.Adaugare numar in stiva\n");
		printf("2.Exit\n");
		printf("1 sau 2?: ");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1: printf("Scrieti un numar: ");
			scanf("%d", &n);
			v = n;
			a = 0; b = 0;
			while (n != 0) 
			{
				b = n % 10;
				a = a * 10 + b;
				n /= 10;
			}
			if (v == a)
				printf("%d este palindrom.\n", v);
			else
				printf("%d nu este palindrom.\n", v);
			push(v); 
			break;
		case 2: exit(0); 
			break;
		default: printf("Nu e bine!");
		}
	}
	system("pause");
	return 0;
}