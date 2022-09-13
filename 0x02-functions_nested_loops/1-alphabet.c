#include "print_alphabet"
#include "main.h"

/**
 * main - This is the main fun
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Nothing.
 */
void print_alphabet(void);
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
		_putchar('\n');
	}
	
}
