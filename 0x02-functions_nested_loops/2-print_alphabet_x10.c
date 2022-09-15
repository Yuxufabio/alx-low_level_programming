#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphalebets x10
 *
 * Return: Always NULL.
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	a = 'a';
	i = '0';
	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
