#include "main.h"

/**
 *  * _puts - Write a function that prints a string, followed
 *   * by a new line, to stdout.
 *    * @str: an input string
 *     * Return: Nothing
 *      */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
