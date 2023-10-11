#include "3-cal.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked b the user
 * @s: the opperator passed as argument
 *
 * Return: a pointer to the function corresponding
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL},
	};
