#include "main.h"

/**
 *print_sign - Dtermines if the input number
 *is greater, equal, or less than zero.
 *
 *@n: The input number as an integer.
 *
 *Return: 1 is greter than zero. 0 is zero.
 *-1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
