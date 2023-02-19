#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - program starts here
  * description: 'checks whether the random number produced is +ve,-ve,0'
  * Return: 0 program runs successfully.
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
