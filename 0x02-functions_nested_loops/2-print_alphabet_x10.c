#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower caps 10 times
 *
 *
 *
 */

void print_alphabet_x10(void)
{
	int pie = 0;
	char alpha;

	while (pie < 10)

	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		pie++;
	}

}
