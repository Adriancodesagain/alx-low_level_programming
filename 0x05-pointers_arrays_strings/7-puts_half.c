#include "main.h"

/**
 * puts_half - function that prints half of a string.
 *
 * @str: string input.
 * void: return type absent.
 */

void puts_half(char *str)
{
	int z, m, len;

	len = 0;

	for (z = 0; str[z] != '\0'; z++)
		len++;

	m = (len / 2);

	if ((len % 2) == 1)
	m = ((len + 1) / 2);

	for (z = m; str[z] != '\0'; z++)
	_putchar(str[z]);
	_putchar('\n');
}
