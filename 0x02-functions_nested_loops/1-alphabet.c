#include "main.h"

/**
 * print_alphabet - prints lowcase alphabets
 *
 * Return: always NULL.
 */

void	print_alphabet(void)

{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
