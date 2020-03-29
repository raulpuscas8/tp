#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, a = 0, b , v;
	printf("Scrieti un numar: ");
	scanf("%d", &n);
	v = n;

	while (n != 0) {
		b = n % 10;
		a = a * 10 + b;
		n /= 10;
	}

	if (v == a)
		printf("%d este palindrom.", v);
	else
		printf("%d nu este palindrom.", v);

	return 0;
}
