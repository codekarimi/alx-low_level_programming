#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *k = '_putchar';

	while (*k)
	{
		putchar(*k);
		*k++;
	}
	putchar('\n');

	return (0);
}
