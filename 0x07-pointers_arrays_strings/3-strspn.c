#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to be evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int m, n, o, flag;

	o = 0;

	for (m = 0; s[m] != '\0'; m++)

	{
		flag = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				o++;
				flag = 1;
			}
		}
			if (flag == 0)
			{
				return (o);
			}
	}

	return (0);
}
