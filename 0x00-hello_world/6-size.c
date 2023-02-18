#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
  */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

	printf("Size of a char: %zu byte(S)\n", sizeof(a));
	printf("Size of a int: %zu byte(S)\n", sizeof(b));
	printf("Size of a long int: %zu byte(S)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(d));
	printf("Size of a float: %zu byte(S)\n", sizeof(e));
return (0);
}
