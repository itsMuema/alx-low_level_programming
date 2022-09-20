#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
