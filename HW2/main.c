// Kurov Aleksandr

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void solution1();
void dec_to_bin(int);

void solution2();
int power_loop(int, int);
int power_rec(int, int);
int power_rec_even(int, int);

void solution3();
int calc_arr(void);
int calc_rec(int);

void menu();

int main(void)
{
	setlocale(0, "");

	int sel = 0;
	do
	{
		system("cls");
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
    case 3:
			solution3();
			break;
		case 0:
			printf("Bye-bye\n");
			break;
		default:
			printf("Wrong selection\n");
		}
	} while (sel != 0);
	system("pause");
	return 0;
}

/**
 * 1. перевод из 10 -> 2
 */
void solution1()
{
	printf("\nSolution 1\n\n");

  int x;
  printf("Input x: ");
  scanf("%d", &x);

  dec_to_bin(x);

  puts("");
	system("pause");
}

void dec_to_bin(int x) {
  if (x != 0) {
    dec_to_bin(x / 2);
    printf("%d", x % 2);
  }
}

/**
 * 2. возведение числа a в степень b
 */
void solution2()
{
	printf("\nSolution 2\n\n");

  int a, b;

  printf("Input a and b: ");
  scanf("%d %d", &a, &b);

  printf("loop: a in power of b is: %d\n", power_loop(a, b));
  printf("rec: a in power of b is: %d\n", power_rec(a, b));
  printf("rec even: a in power of b is: %d\n", power_rec_even(a, b));

	system("pause");
}

// реализация через цикл
int power_loop(int a, int b) {

  long p = 1;

  while (b) {
    p *= a;
    b--;
  }

  return p;
}

// реализация с рекурсией
int power_rec(int a, int b) {
  if (b == 0) {
    return 1;
  } else {
    return a * power_rec(a, b - 1);
  }
}

// реализация с рекурсией + свойство четности степени
int power_rec_even(int a, int b) {
  int p = 1;

  if (b == 0) {
    return 1;
  }

  if (b % 2 == 0) {
    p = power_rec_even(a, b / 2);
    return p * p;
  } else {
    return a * power_rec_even(a, b - 1);
  }

}

/**
 * 3.
 */
void solution3()
{
	printf("\nSolution 3\n\n");

  printf("arr: programms count: %d\n", calc_arr());
  printf("rec: programms count: %d\n", calc_rec(20));

	system("pause");
}

// реализация с массивом
int calc_arr(void) {
  int a[21];
  int i;

  a[2] = 0;
  a[3] = 1;

  for (i = 4; i < 21; i++) {
    if (i % 2 == 0) {
      a[i] = a[i - 1] + a[i / 2];
    } else {
      a[i] = a[i - 1];
    }
  }

  return a[20];
}

// реализация с рекурсией
int calc_rec(int i) {
  if (i == 2) return 0;
  if (i == 3) return 1;
  if (i % 2 == 0) {
    return calc_rec(i - 1) + calc_rec(i / 2);
  } else {
    return calc_rec(i - 1);
  }
}

/**
 * отрисовка меню
 */
void menu()
{
	printf("1 - task 1: перевода из 10 системы в двоичную\n");
	printf("2 - task 2: возведение числа a в степень b\n");
	printf("3 - task 3: подсчет программ перевода из 3 в 20\n");
	printf("0 - exit\n");
}
