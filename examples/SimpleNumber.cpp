#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int number;
	printf("Input number:");
	scanf_s("%d", &number);
	int d = 0;
	int i = 2;

	while (i <= sqrt(number))
	{
		if (number % i == 0)
		{
			d++;
			break;
		}
		i++;
	}

	if (d == 0)
		printf("Number is simple");
	else
		printf("Number is not simple");

	return 0;
}
