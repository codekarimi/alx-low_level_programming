#include"main.h"

/**
 * _isupper - Entry point
 * @c:input integer
 *Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char upper;
	int islower = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == uppercase)
		{
			islower = 1;
			break;
		}
	}
	return (islower);
}
