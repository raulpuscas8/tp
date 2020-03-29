#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *f, *d, *x;
	f = (int*)malloc(sizeof(int));

	printf("f= ", f);
	scanf("%d", &f);

	d = (int*)malloc(sizeof(int));

	printf("d= ", d);
	scanf("%d", &d);

	x = f; f = d;d = x;
	printf("f= d", "d= x", "x= f");
	system("pause");
	return 0;
}
