#include "main.h"

/**
 * print_array - function prints the array
 * @n: elements numbers
 * @a: pointer to interger
 * void: return type is none
 */

void print_array(int *a, int n)
{
int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
