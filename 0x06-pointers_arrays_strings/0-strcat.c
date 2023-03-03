#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to string to be concatenated.
 * @src: source string to append to @dest
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, length = 0;

	while (dest[index++])
		length++;

	for (index = 0; src[index]; index++)
		dest[length++] = src[index];

	return (dest);
}
