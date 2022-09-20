#incude "main.h"
/**
 * swap_int - function to swap two integers
 * @a: first int
 * @b: second int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
	return;
}
