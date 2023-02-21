#include "main.h"
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *k = "_putchar";

	while (*k)
	{
		_putchar(*k);
		k++;
	}
	_putchar('\n');

	return (0);
}
