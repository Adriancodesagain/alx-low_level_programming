#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'printing all the numbers of base16 in lowercase'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0 ; num < 10 ; num++)

	{
		putchar((num % 10) + '0');
	}

	for (alpha = 'a' ; alpha <= 'f' ; alpha++)

	{
		putchar(alpha);
	}

	putchar('\n');

return (0);

}
