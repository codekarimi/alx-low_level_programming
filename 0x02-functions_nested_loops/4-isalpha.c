#include"main.h"

/**
 * _isalpha -checks for lowercase or uppercase
 *@c:character
 * Return: 1 if uppercase or lowercase 0 if otherwise
 */
int _isalpha(int c)
{

	char p, k;
	int alpha = 0;

	for (p = 'a'; p <= 'z'; p++)
	{
		for (k = 'A'; k <= 'z'; k++)
		{
			if (c == p || c == k)
				alpha = 1;
		}
	}

	return (alpha);
}
