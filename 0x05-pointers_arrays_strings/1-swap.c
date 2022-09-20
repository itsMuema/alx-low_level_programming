#include "main.h"
/**
 * swap_int - function to swap two integers
 * @a: first int
 * @b: second int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

