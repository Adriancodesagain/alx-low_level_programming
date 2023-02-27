#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string being printed
 * void: returns nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}
