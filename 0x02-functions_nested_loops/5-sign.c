#include"main.h"

/**
 * print_sign - Entry point
 *@n:input number
 * Return: 1 if n is positive, 0 if n is equal to 0 ,-1 if n is negative;
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		-putchar('-'0;)
	}

	return (num);
}
