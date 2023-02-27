#include "main.h"

/**
 * puts2 - function prints characters
 *
 * @str: input string
 * void: return type is null.
 */

void puts2(char *str)
{
	int len = 0;
	int p = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	p = len - 1;
	for (o = 0 ; o <= p ; o++)

	{
		if (o % 2 == 0)

		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
