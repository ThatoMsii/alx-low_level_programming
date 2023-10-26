#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big ondian, 1 if little ondian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
