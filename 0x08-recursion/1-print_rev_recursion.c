#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: string been printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)

	{
		_putchar(*s);
		_print_rev_recursion(s + 1);

	}
}
