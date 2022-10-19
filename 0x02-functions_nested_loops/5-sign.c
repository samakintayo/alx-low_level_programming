#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: The character to be checked
 *
 * Return 1 and prints + , -1 for negative num or  zero or otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
