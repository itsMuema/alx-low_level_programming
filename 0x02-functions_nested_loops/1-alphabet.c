#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	void print_alphabet(void)
	{
		char low;

		for (low = 'a'; low <= 'z'; low++)
		{
			putchar(low);
			putchar('\n');
		}
	}
	return (0);
}
