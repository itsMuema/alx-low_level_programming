#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 */
void print_alphabet(void);
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}

	_putchar('\n');
}
