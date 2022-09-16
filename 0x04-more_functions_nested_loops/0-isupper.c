#include "main.h"
/**
 *_isupper - checks if c i uppercase
 *@c: character variable
 *Return: 1 if uppercase,otherwise 0
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'A' && c <= 'Z')
		{
			return (1);
		}
		else if (c == 'a' && c <= 'z')
		{
			return (0);
		}
	}
	return (1);
}
