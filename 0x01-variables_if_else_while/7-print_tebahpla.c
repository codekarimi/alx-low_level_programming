#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char get;

	for (get = 'z'; get >= 'a'; get--)
		putchar(get);
	putchar('\n');

	return (0);
}
