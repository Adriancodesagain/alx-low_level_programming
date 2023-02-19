#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'putchar alphabets in small caps'
 *
 * Return: Always 0 (Success)
 */

int main(void)/*the function main*/
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar (ch);
	/*putchar('\n');*/
	}
	putchar('\n');
	return (0);
}
