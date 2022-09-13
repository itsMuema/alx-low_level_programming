#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
void print_alphabet(void);

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
		_putchar('\n');
	}
	return (0);
}

