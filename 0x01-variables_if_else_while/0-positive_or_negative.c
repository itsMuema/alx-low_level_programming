#include<stdio.h>
#include<time.h>
/**
 * main - Entry
 *
 * Return : Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
