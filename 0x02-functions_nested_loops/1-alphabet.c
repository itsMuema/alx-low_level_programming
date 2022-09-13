#include "main.h"
#include<stdio.h>
#include<stdlib.h>

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
		putchar(low);
		putchar('\n');
	}
}
