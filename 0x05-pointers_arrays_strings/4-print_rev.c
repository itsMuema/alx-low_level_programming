#include "main.h"
/**
 * print_rev - function to print string in reverse
 * @s: string to be reversed
 *
 *Return: void
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		--i;
		_putchar(s[i]);
	}
	_putchar('\n');
}
