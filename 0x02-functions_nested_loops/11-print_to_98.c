#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print number from n to 98
 *@n : the beginin of the list
 *Return void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
