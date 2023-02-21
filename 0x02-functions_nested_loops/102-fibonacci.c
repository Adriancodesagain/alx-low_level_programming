#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: fibonacci numbers below 50
 *
 * Return: always 0 (success)
 */

int main(void)
{
	 int a = 0, b = 1, c, i;

	 printf("\n%d %d", a, b);/*printing 0 and 1*/

	 for (i = 2; i < 51; ++i)/*loop starts from 2 because 0 and 1 are printed*/

	 {
		 c = a + b;
		 a = b;
		 b = c;
		 printf(" %d", c);
	 }

	 printf("\n");

return (0);
}
