#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (its a success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		pirintf("%dis negative\n", n);
	}
	return (0);

}

