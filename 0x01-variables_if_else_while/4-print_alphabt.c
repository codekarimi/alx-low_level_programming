#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char get, e, q;

	e = 'e';
	q = 'q';

	for (get = 'a'; get <= 'z'; get++)
	{
		if (get != e && get != q)
			putchar(get);
	}
	putchar('\n');
	return (0);
}
