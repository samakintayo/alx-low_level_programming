#include "main.h"

/**
 * _isdigit - Check is a character is a digit
 * @x: character to be checked
 * Return: 1 for a character that will be a digit or zero for any thing else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
