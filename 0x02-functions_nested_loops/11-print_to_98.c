#include "main.h"
/**
 * print_to_98 - check main.h
 *@n: Set integer
 *
 *Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar('%d', n);

			if ( n == 98)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar('%d', n);

			if ( == 98)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}




