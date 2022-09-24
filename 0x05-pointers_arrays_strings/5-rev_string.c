#include "main.h"
/**
 *  rev_string - function to reverse a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		--len;
		_putchar(s[len]);
	}
}
				
			
				

