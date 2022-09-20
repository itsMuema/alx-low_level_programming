#include "main.h"
#include <stdio.h>
/**
 * print_array - print array elements
 *  @a: pointer to a variable
 *  @n: number of items in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == -1)
			continue;

		printf(", ");
	}
	printf("\n");
}

