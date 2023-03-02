#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 *@dest: an input string
 * @src: an input string
 *  Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
