#include<stdio.h>
/**
 * main - storing adddress of variable into a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Adddress of 'n':%p\n", &n);
	printf("Value of 'p':%p\n", p);
	return (0);
}


