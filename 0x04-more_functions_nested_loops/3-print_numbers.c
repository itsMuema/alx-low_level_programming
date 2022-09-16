#include "main.h"
/**
 *print_numbers - print numbers 0-9
 *
 *Return: void
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
