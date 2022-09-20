#include "main.h"
/**
 * reset_to_98 - resets vaue of int
 * @i: variable to be reset
 *
 *Return: Nothing
 */
void reset_to_98(int *n)
{
	int i;

	i = 360;
	*n = &i;


	_putchar("Value of is :%d\n", i);
	*n = 98;
	_putchar("Now reset to:%d\n",i);
	return;
}


