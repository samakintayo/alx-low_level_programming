#include "main.h"

/**
 * _isupper - function that check for uppercase charactet
 * @c: the character to be checked
 * Return: 1 Uppercase letter and 0 for any else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
