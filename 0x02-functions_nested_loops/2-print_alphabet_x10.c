#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphatbet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
