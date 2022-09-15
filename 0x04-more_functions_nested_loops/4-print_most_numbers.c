#include "main.h" 

/**
 * print_most_numbers - checks for a digit (0 through 9).
 *
 * Return: Always 0
 */

void print_most_numbers(void) 
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
