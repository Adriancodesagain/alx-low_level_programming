#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints out character
 *
 * @c: character to print
 *
 * Return: success 1, -1 for error followed by errorno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
