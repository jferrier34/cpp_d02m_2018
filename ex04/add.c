/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "castmania.h"

int	integer_add(int a, int b)
{
	return (a + b);
}

int	absolute_add(int a, int b)
{
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	return (a + b);
}

void exec_add(addition_t *operation)
{	
	if (operation->add_type == NORMAL)
	{
		operation->add_op.res = integer_add(operation->add_op.a, operation->add_op.b);
	}
	if (operation->add_type == ABSOLUTE)
        {
		operation->add_op.res = absolute_add(operation->add_op.a, operation->add_op.b);
	}
}
