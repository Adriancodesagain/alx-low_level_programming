#include "main.h"

/**
 * _strlen - returns the length of the string.
 * Return: length of string
 * @s: string
 */

int _strlen(char *s)
{
	/*string declaration*/
	int len = 0;/*length of string*/

	while (*s != '\0')
	{
		len++;
		s++;
	}

return (len);
}
