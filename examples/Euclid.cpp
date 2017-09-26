#include <stdio.h>
// Определение наибольшего общего делителя. Алгоритм Эвклида

int main(int argc, const char *argv[])
{
	int a;
	int b;
	printf("%s", "Input a:");
	scanf_s("%d", &a);
	printf("%s", "Input b:");
	scanf_s("%d", &b);
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	printf("GCD: %d", a);
	return 0;
}
