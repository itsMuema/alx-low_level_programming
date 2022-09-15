#include "main.h"
/**
 * print_last_digit - check main.h
 * @i: integer variable
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int d;

	if (i < 0)
	{
		d = -1 * (i % 10);
	}
	else
	{
		d = i % 10;
	}
	_putchar((d % 10) + '0');
	return (d % 10);
}


