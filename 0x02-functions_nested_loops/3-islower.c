#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Return 1 for lowercase or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
