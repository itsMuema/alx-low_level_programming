#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_alphabet - func name
 * Prints lowercase followe by a new line
 * Returns: Has no return
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}
}
