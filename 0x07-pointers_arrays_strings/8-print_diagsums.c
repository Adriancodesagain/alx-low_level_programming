#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix to which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int c;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (c = 0; c < size; c++)

	{
		sum1 += a[(size * c) + c];
		sum2 += a[(size * (c + 1)) - (c + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
