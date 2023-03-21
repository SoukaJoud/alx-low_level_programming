#include "main.h"
/**
 *_islower - check if c is lower
 * return 0 if C is lower and 1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}

