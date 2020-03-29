#include <stdio.h>
#include <stdlib.h>
int st[100], vf = -1;
void push(int a)
{
	st[++vf] = a;
}

void pop()
{
	if (vf != -1)
		vf--;
	else
		printf("Stiva este acum goala");
}


void afisare()
{
	int i;
	for (i = vf; i >= 0; i--)
		printf("%d", st[i]);
}
int verificare()
{
	int i;
	for (i = 0; i <= vf / 2; i++)
		if (st[i] != st[vf - i])
			return 0;
	return 1;
}
int binar(int n)
{
	int nr = 0, p = 1;
	while
	{
		nr += (n % 2)*p;
		p *= 10;
		n /= 2;
	}
	return nr;
}
int main()
{
	int n, nr;
	printf("n="); scanf("%d", &n);
	nr = binar(n);
	while
	{
		push(n % 10);
		n /= 10;
	}
	
	afisare();
	if (verificare())
		printf("nr este palindrom\n");
	else
		printf("nu nu este palindrom\n");
	system("pause");
	return 0;
}
