#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	//srand(time(NULL));
	//rand() % 100+10;

	int x, a, b, m;
	m = 100; // Вершина последовательности
	b = 3;
	a = 2;
	x = 1;
	int i;
	int modulus = 100;

	for (i = 0; i < modulus; i++)
	{
		x = (a * x + b) % m;
		printf("%d ", x);
	}

	return 0;
}
