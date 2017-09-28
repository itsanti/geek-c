// Kurov Aleksandr

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void solution2();
void solution3();
void solution5();
int get_season(int);
void solution8();
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
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
    case 5:
			solution5();
			break;
		case 8:
			solution8();
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
 * 2. Найти максимальное из четырех чисел. Массивы не использовать.
 */
void solution2()
{
	printf("\nSolution 2\n\n");

	// сравниваем max с остальными. можно сравнить a и b, c и d, а затем два максимума

	int a, b, c, d;
	int max;

	printf("Введите 4 числа через пробел: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
	printf("max = %d\n", max);
	system("pause");
}

/**
 * 3. обмен значениями двух целочисленных переменных
 */
void solution3()
{
	printf("\nSolution 3\n\n");

	int a, b, c;

	printf("Введите 2 числа через пробел: ");
	scanf("%d %d", &a, &b);
	printf("до обмена: a = %d b = %d\n", a, b);

	// обмен с переменной с
	c = a;
	a = b;
	b = c;

	printf("после обмена: a = %d b = %d\n", a, b);

	// обмен через сумму
	a = a + b;
	b = a - b;
	a = a - b;

	printf("после обмена: a = %d b = %d\n", a, b);

	system("pause");
}

/**
 * 5. определить, к какому времени года относится месяц
 */
void solution5()
{
	printf("\nSolution 5\n\n");

	int month;

  while(1) {
    printf("Введите номер месяца (-1 для выхода): ");
    scanf("%d", &month);
    if (month == -1) {
      break;
    }
    switch (get_season(month)) {
      case 1:
        printf("Зима\n");
        break;
      case 2:
        printf("Весна\n");
        break;
      case 3:
        printf("Лето\n");
        break;
      case 4:
        printf("Осень\n");
        break;
      default:
        printf("Неверный номер месяцца\n");
    }
  }

	system("pause");
}

/**
 * получение номера сезона по номеру месяца - аппроксимация
 */
int get_season(int month) {
  double y;

  if (month == 12) {
    return 1;
  }

  y = 0.3273 * month + 0.6727;
  return (int)round(y);
}

/**
 * 8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
 */
void solution8()
{
	printf("\nSolution 8\n\n");

	int a, b;
	int i;

	printf("Введите 2 числа через пробел: ");
	scanf("%d %d", &a, &b);

	printf("current\ta^2\ta^3\n");
	for (i = a; i <= b; i++) {
		printf("%d\t%d\t%d\t\n", i, i * i, i * i * i);
	}

	system("pause");
}

/**
 * отрисовка меню
 */
void menu()
{
	printf("2 - task 2: максимальное из четырех чисел\n");
	printf("3 - task 3: обмен переменных\n");
	printf("5 - task 5: определить, к какому времени года относится месяц\n");
	printf("8 - task 8: вывести квадраты и кубы чисел\n");
	printf("0 - exit\n");
}
