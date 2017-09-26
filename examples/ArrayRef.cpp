#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 100 

void arrayPrint(int length, int* a)
{
	int i;
	for (i = 0; i < length; i++)
		printf("%6i", a[i]);
	printf("\n");
}

// ���������� ������������� ����� � �������
int findMax(int length, int *a)
{
	// � �������� ���������� �������� ��������� ���� ������ �����
	int result = a[0];
	int i;
	// ������������� ��������� �����
	for (i = 1; i < length; i++)
		// ���� ����� ��� ���� ����� ������ max, �� ���� ��� � �������� max
		if (a[i] > result) result = a[i];
	// ���������� ���������
	return result;
}
int main(int argc, char *argv[])
{
	int array[ARR_SIZE];
	int size = 0;
	FILE *in;
	in = fopen("D:\\temp\\data.txt", "r");
	if (in == NULL)
	{
		puts("Can't open file");
		return 1;
	}
	int data;
	// ���� ���������� ��������� ������ ������ ����
	while (fscanf(in, "%d", &data) > 0)
	{
		array[size] = data;
		size++;
	}
	fclose(in);
	printf("Read %d records\n", size);
	// ������ �������� ���������� (������ �����), ������� & �� ��������
	arrayPrint(size, array);
	printf("Max = %d", findMax(size, array));
	return 0;
}
