#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed.
 * void: return is none.
 */

void print_rev(char *s)
{
	int len = 0;
	int p;

	while (*s != '\0')
	{
		len++;
		s++;
	}
		s--;
	for (p = len; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	putchar('\n');
}
