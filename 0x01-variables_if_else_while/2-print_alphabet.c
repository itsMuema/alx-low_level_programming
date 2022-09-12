#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	putchar ("%c ", ch);
	while (ch <= 'z')
	{
		putchar(ch);
			ch++;
	}
	putchar ("\n");
	return (0);
}
