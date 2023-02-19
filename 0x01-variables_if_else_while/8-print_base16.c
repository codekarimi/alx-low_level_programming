#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: A lways 0 (Success)
 */
int main(void)
{
	int o;
	char asu;

	for (o = '0'; o <= '9'; o++)
		putchar(o);
	for (asu = 'a'; asu <= 'f'; asu++)
		putchar(asu);
	putchar('\n');

	return (0);
}

