#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always  0 (success)
 */

int main(void)
{
	unsigned long int sum_of_multiple_of_3, sum_of_multiple_of_5, sum;
	int f;

	sum_of_multiple_of_5 = 0;
	sum_of_multiple_of_3 = 0;
	sum = 0;

	for (f = 0; f < 1024; f++)

	{
		if ((f % 3) == 0)

		{
			sum_of_multiple_of_3 = sum_of_multiple_of_3 + f;

		}

		else if ((f % 5) == 0)

		{
			sum_of_multiple_of_5 = sum_of_multiple_of_5 + f;
		}
	}

		sum = sum_of_multiple_of_3 + sum_of_multiple_of_5;
		printf("%lu\n", sum);
return (0);
}
