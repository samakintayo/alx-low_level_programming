#include "main.h"

/**
 * _isdigit - Check is a character is a digit
 * @c: character to be checked
 * Return: 1 for a character that will be a digit or zero for any thing else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
