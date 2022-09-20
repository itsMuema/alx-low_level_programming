#include "main.h"
/**
 *  rev_string - function to reverse a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int rev = 0, i = 0;
	char len;

	while (s[rev] != '\0')
		rev ++;
	while (i < rev--)
	{
		len = s[i];
		s[i++] = s[rev];
		s[rev] = len;
	}
}

