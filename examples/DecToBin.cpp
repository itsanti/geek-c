#include <stdio.h>

#define ARR_SIZE 50

// Задаём значение первого элемента, чтобы обнулить остальные
int bin[ARR_SIZE] = {0};

int size = 0;    // количество реально задействованных элементов массива

void convertToBin(long n)
{
	int i = 0;
	while (n > 0)
	{
		bin[i++] = n % 2;
		n /= 2;
	}
	size = i;
}
void binPrint()
{
	int i;
	for (i = size - 1; i >= 0; i--)
		printf("%d", bin[i]);
	printf("\n");
}
int main(int argc, char *argv[])
{
	int N = 3;
	convertToBin(N);
	binPrint();

	N = 1024;
	convertToBin(N);
	binPrint();

	return 0;
}
