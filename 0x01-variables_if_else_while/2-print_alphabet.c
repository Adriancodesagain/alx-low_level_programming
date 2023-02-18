#include <stdio.h>
/*
*Main-program begins here
*Return:0 success
*
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
