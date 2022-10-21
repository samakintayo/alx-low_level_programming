#include "main.h"

/**
 * print_most_numbers - function that print number from0 to 9 except 2 & 4
 * Return: The number since 0 up to 9
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
