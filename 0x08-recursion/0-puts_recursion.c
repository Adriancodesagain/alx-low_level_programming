#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a newline
 * @s: string being printed
 */

void _puts_recursion(char *s)
{
	if (*s)

	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}

	_putchar('\n');
}
