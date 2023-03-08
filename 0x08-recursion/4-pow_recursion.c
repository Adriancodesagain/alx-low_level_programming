#include "main.h"

/**
 * _pow_recursion - raises an interger to the power of another
 * @x: interger being powered
 * @y: interger that is the exponent
 * Return: value of interger x raised to power y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);

}
