#include"main.h"

/**
 * _islower -Entry point
 *@c: An input character
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{

	char k;
	int l = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			l = 1;
	}

	return (l);
}
