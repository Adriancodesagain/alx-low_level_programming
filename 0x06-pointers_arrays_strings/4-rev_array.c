#include "main.h"

/**
 *reverse_array - function reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int adam, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		adam = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = adam;
	}
}
