#include <stdio.h>
/*
*main-programs starts here.
Return:0 program executes with success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A' ; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');
return (0);
}
