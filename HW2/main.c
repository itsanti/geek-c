// Kurov Aleksandr

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void solution2();
void solution3();
void solution5();
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

	system("pause");
}

/**
 * 3. обмен значениями двух целочисленных переменных
 */
void solution3()
{
	printf("\nSolution 3\n\n");



	system("pause");
}

/**
 * 5. определить, к какому времени года относится месяц
 */
void solution5()
{
	printf("\nSolution 5\n\n");

	int month;



	system("pause");
}

/**
 * 8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
 */
void solution8()
{
	printf("\nSolution 8\n\n");

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
