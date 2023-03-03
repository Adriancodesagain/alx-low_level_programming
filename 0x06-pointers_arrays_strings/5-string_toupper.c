#include "main.h"

/**
 *string_toupper - Changes all lowercase to uppercase.
 *
 * @str: The string to be changed.
 *
 * Return: pointer to the changed string.
 */

char *string_toupper(char *c)
{
	int index = 0;

	while (c[index])
	{
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] -= 32;

		index++;
	}

	return (c);
}
