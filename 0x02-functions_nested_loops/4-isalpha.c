#include "main.h"

/**
 * check for alphabetic characters
 *
 * Returns 1 if c is a letter, lowercase or uppercase, return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
