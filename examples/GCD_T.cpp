#include <stdio.h>

#define T long

T gcd(T a, T b) {
	T c;

	while (b) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{
	int a=1000, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", gcd(a, b));
}
