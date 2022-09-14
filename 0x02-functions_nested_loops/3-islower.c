#include "main.h"
/**
 * _islower - prints lowercase
 * @c: the integer value it receives
 *
 *Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
