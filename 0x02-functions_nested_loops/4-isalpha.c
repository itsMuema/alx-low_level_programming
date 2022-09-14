#include "main.h"
/**
 *_isalpha - checks whether given character is an alphabet
 *@c: an argument
 *
 *Return: 1 if alphabet else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
