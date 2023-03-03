#include "main.h"

/**
 * _strncpy - Copies an inputted number
 *
 * @dest: buffer storing the string copy.
 * @src: source string
 * @n: maximum number of bytes to copied from src.
 *
 * Return: pointer to resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_length = 0;

	while (src[index++])
		src_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
