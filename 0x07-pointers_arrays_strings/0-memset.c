#include "main.h"

/**
 * _memset - fills the first n bytes
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

	{
		s[a] = b;
	}

	return (s);
}
