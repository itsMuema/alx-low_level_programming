#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 *  @str: An input string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i  = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while ( i == len)
	{
		_putchar(str[i])
	}
}
