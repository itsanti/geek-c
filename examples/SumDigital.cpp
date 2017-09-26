#include <stdio.h>
int sumDigit(long a)
{
	int result = 0;
	while (a > 0)
	{
		result+= a % 10;
		a /= 10;
	}
	return result;
}

int main(int argc, char *argv[])
{
	int n;
	printf("Input number:");
	scanf_s("%d", &n);
	printf("Sum digit: %d", sumDigit(n));

	return 0;
}
